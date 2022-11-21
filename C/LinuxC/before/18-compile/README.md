### 汇编部分

一步到位的编译指令是:
`gcc -o main hello.c`
实质上，编译过程是分为四个阶段进行的

#### 预处理(也称预编译，Preprocessing)

`gcc -E hello.c -o hello.i`
-E 选项，可以让编译器在预处理后停止，并输出预处理结果.
-o 命令生成目标文件，若省略，则会直接在命令行中输出预处理后的代码.
hello.i 文件可以作为普通文本文件打开进行查看

#### 编译 (Compilation)

编译过程就是对预处理完的文件进行一系列的词法分析，语法分析，语义分析及优化后生成相应的汇编代码。
`gcc -S hello.i -o hello.s`

#### 汇编 (Assembly)

`gcc -c hello.s -o hello.o`
编过程调用对汇编代码进行处理，生成处理器能识别的指令，保存在后缀为.o 的目标文件中。
当程序由多个源代码文件构成时，每个文件都要先完成汇编工作，生成.o 目标 文件后，才能进入下一步的链接工作。
注意：hello.o 目标文件为 ELF（Executable and Linkable Format）格式的可重定向文件

#### 连接(Linking)

`gcc hello.c -o hello`
将程序的目标文件与所需的所有附加的目标文件连接起来，最终生成可执行文件。
链接也分为静态链接和动态链接。
静态链接是指在编译阶段直接把静态库加入到可执行文件中去，这样可执行文件会比较大。
动态链接则是指链接阶段仅仅只加入一些描述信息，而程序执行时再从系统中把相应动态库加载到内存中去。

#### 反汇编 ELF

https://wangchujiang.com/linux-command/c/objdump.html
使用 `objdump -S` 将其反汇编并且将其 C 语言源代码混合显示出来：
`gcc -o hello -g hello.c` //要加上-g 选项  
 将
`objdump -S hello`
`objdump -S hello.o` // 获取 text 格式的

### hello.s 文件的解释

- 1. `%rbp` 是栈帧指针，用于标识当前栈帧的起始位置;

  - [c-x86_64 汇编器中 RBP 寄存器的作用是什么？](https://www.itranslater.com/qa/details/2583745812048118784)
  - [.cfi 指令解读](https://www.cxybb.com/article/lijiatong1005/9321253)
  - [CFI directives](https://sourceware.org/binutils/docs/as/CFI-directives.html)
  - base pointer 基础指针
  - 获取堆栈指针的快照

- 2. `rsp` Register Stack Pointer
- 3. `esp` Extended Stack Pointer
     holds the top of the stack

.cfi_startproc
.cfi_startproc  
 用于每个函数的开头， 初始化一些内部数据结构
.cfi_endproc
通过关闭函数

---

- CFI：
  - Calling Frame Info 调用框架信息
  - 出现异常时 stack 的回滚 unwind(stack unwind 栈回退)
- CFA：
  - Canonical Frame Address 规范帧地址
  - 是一个地址，执行 `call xxx` 时 SP(stack pointer) 所指向的地址
- 例子：表示执行完 `pushl %ebp` 后 SP 与 CFA 偏了 8 字节（4 字节 return address,4 字节 ebp）

  ```bash
    pushl    %ebp
    .cfi_def_cfa_offset 8
    .cfi_offset 5, -8
  ```

  - 例子：表示执行完 `movl %esp, %ebp` 后 cfa_register 不再是 esp,而是 ebp

  ```bash
    movl    %esp, %ebp
    .cfi_def_cfa_register 5
  ```

  - 例子：表示执行完 leave 后 ebp 的值已经恢复到初始状态，并且 CFA 的计算方式应该是 esp+4

  ```bash
    leave
    .cfi_restore 5
    .cfi_def_cfa 4, 4
  ```

---

movl %ecx %eax // 将 ecx 寄存器内容 移至 eax
movb %bh (%eax) // 将 bh 的一个字节 移至 eax 寄存器指向的地址

minor correction, EAX doesn't equal AX, more accurately, AX represents the lower 16-bits (half) of EAX. likewise, AH and AL are the two halves of AX.

- [eax](https://stackoverflow.com/a/228231)

---

- 操作数
  - 第一操作数、第二操作数与源操作数、目的操作数对应
- 操作码
  b 8 位 byte
  w 16 位 word byte
  I 32 位 dword byte
- 寄存器 %eax
- 立即数 常量 $0x

---

- objdump

  - 显示二进制文件信息
  - objdump 命令 是用查看目标文件或者可执行的目标文件的构成的 gcc 工具。
  - [objdump 命令](https://wangchujiang.com/linux-command/c/objdump.html)

- 查看电脑配置是 arm 还是 x86
  - arm x86 都是指 CPU 的内核
  - MAC: 终端命令行 uname -a [mac x86_64]

### GCC 生成汇编文件解析
