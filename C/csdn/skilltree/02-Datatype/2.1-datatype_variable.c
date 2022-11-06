/* 变量：求正整数的平方
variable: Find the square of a positive integer
使用while循环修改变量值，依次打印10以内(包含10)所有正整数的平方。
Use a while loop to modify the value of the variable, printing the squares of all positive integers up to and including 10 in turn.
*/ 

/* 小知识：C语言变量的生命周期和作用域
|变量类型 | 生存周期 | 作用域|
|-- | -- | --|
|局部变量 | auto：自动变量，离开定义函数立即消失<br>register：寄存器变量，离开定义函数立即消失<br>static：静态变量，离开定义函数仍然存在 | 只作用于该函数内部|
|全局变量 | 在程序运行期间一直存在 | static：静态变量，仅限于本文件内部条用<br>extern：外部存储变量，用于声明本文件将要用到的其他文件的变量|
*/ 

#include <stdio.h>

int main(int argc, char** argv){
    int num = 1;
    int max_num = 10;
    int step = 1;
    int result = 0;
    while(num <= max_num){
        result = num * num;
        printf("%d^2 = %d\n", num, result);
        num = num + step;
    }
    return 0;
}