### 20 链接详情

### 20.1 多目标文件的链接

文件说明：

- stack.c ------ 书中的例子
- main.c ------ 书中的例子
- func.h ------ 链接库
- final ------ 可执行文件，命令【gcc stack.c main.c -o final】生成
- final2 ------ 可执行文件，命令【gcc main.c stack.c -o final2】生成
- 1_stack.txt ------ 【objdump -d stack.o】
- 2_main.txt ------ 【objdump -d main.o】
- 3_final.txt ------ 【objdump -d final】
- 4_final2.txt ------ 【objdump -d final2】

可以通过比较`3_final.txt`和`4_final2.txt`两个文件看出，顺序和命令中的有关系

### 20.2 定义和声明

在 20.1 的 `main.c` 的基础上;

### 20.3 静态库

命令

- `gcc -c stack/stack.c stack/push.c stack/pop.c stack/is_empty.c`
- `ar rs libstack.a stack.o push.o pop.o is_empty.o`
- `gcc main.c -L. -lstack -Istack -o main`
  - `-L.`表示在当前目录找;(即使库文件就在当前目录，编译器默认也不会去找的，所以-L.选项不能少)
  - `-lstack`告诉编译器要链接 libstack 库;
  - `-I`选项告诉编译器去哪里找头文件;

编译器默认会找的目录可以用-print-search-dirs 选项查看

### 20.4 共享库

#### 20.4.1. 编译、链接、运行

##### 1

组成共享库的目标文件和一般的目标文件有所不同，在编译时要加-fPIC 选项,比如：

- `gcc -c -fPIC stack/stack.c stack/push.c stack/pop.c stack/is_empty.c`

`-f` 后面跟一些编译选项，`PIC` 是其中一种，表示生成位置无关代码(Position Independent Code)。

用-fPIC 生成的目标文件和一般的目标文件有什么不同：

1. 不加`-fPIC` 选项编译生成目标文件

- `gcc -c -g stack/stack.c stack/push.c stack/pop.c stack/is_empty.c`
  加调试信息必须在编译每个目标文件时用-g 选项，而不能只在最后编译生成可执行文件 时用-g 选项。
- `objdump -dS push.o`

2. 编译链接成可执行文件之后再做反汇编分析

- `gcc -g main.c stack.o push.o pop.o is_empty.o -Istack -o main`
- `objdump -dS main`

3. 用`-fPIC` 编译生成的目标文件:

- `gcc -c -g -fPIC stack/stack.c stack/push.c stack/pop.c`
- `objdump -dS push.o`

4. 先编译生成共享库再做反汇编分析:

- `gcc -shared -o libstack.so stack.o push.o pop.o is_empty.o`
- `objdump -dS libstack.so`

##### 2.运行时在哪些路径下找共享库？

https://akaedu.github.io/book/ch20s04.html#id2790795

#### 20.4.2. 动态链接的过程

#### 20.4.3. 共享库的命名惯例
