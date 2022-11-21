
#include<stdio.h>
#define MAX 81

int main(void)
{
    char name[MAX];
    char *ptr; // 指向char的指针

    printf("Please input your name: ");
    // gets() 函数使用 return 关键字返回字符串的地址
    ptr = gets(name); // 使用一个地址把字符串赋值给name
    // warning: this program uses gets(), which is unsafe.
    
    printf("name: %s\n", name);
    printf("ptr: %s\n", ptr);

    return 0;
}