/*
1、include的作用
在include的地方，把头文件里的内容原封不动的复制到引用该头文件的地方。
2、头文件的引用
头文件引用有两种形式：
#include < stdio.h> // 编译器提供的头文件
include "main.h"    // 自己写的头文件
    编译时，编译器会在项目所在的文件夹中进行查找，如果还才存在子文件夹，则在Makefile中用-I（大写i）来指定头文件搜索目录。
3、头文件的内容
头文件里一般包括宏定义， 全局变量， 函数原型声明。
*/ 

// _MAIN_H_,头文件名的格式为"_头文件名_"，注意要大写
#ifndef _MAIN_H_  // 如果没有定义头文件main.h，则执行下面的代码。这是防止重复定义
#define _MAIN_H_  // 定义头文件

//下面的代码是头文件的内容
#include<stdio.h>//头文件
#define ADD 1 //宏定义
extern int x; //全局变量
void swap(int a, int b);//函数声明

#endif	//表示头文件结束

/*
include包含.c源文件
#include "./test/a.c"
(1)include是可以包含.c源文件的，在某些工程里可以看到，但是这样的做法不常见也不推荐；
(2)include关键字包含.c源文件和.h头文件，理解都是一样的，在原地将引用的文件展开；
*/ 
