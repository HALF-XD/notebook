/* 函数的声明
1.在C语言中，函数的定义顺序是有讲究的：默认情况下，只有后面定义的函数才可以调用前面定义过的函数
2.如果想把函数的定义写在main函数后面，而且main函数能正常调用这些函数，那就必须在main函数的前面进行函数的声明
3.函数的声明格式
*/ 
// C语言函数声明和定义语法：

// 函数原型(可作为函数声明)
return_type function_name(parameter_types); 

// main函数代码

// 函数定义
return_type function_name (function_parameters) { 
    // 函数被调用时需要执行的语句或程序块
    return value;
}


/* 多源文件开发
1.为什么要有多个源文件
2.将sum函数写到其他源文件中
3.在main函数中调用sum函数
4.编译所有的源文件
5.链接所有的目标文件

#include
1.#include的作用: C语言的预处理指令
2.#include可以使用绝对路径
3.#include <>和#include ""的区别
4.stdio.h
5.头文件.h和源文件.c的分工

标准库函数
I/O函数，字符串，字符处理函数，数学函数，接口函数，
时间转换和操作函数，动态地址分配函数，目录函数，
过程控制函数，字符屏幕和图形功能函数。

这些库函数在不同的头文件中声明。比如：
math.h头文件中有：
    sin(x),cos(x),exp(x)（求e^x），fabs(x)（求x的绝对值）等库函数。
stdio.h头文件中有：
    scanf(),printf(),gets(),puts(),getchar(),putchar()等库函数。
string.h头文件中有：
    strcmp(),strcpy(),strcat(),strlen等库函数。
*/ 