// 读取一行并把它回显在下一行，用下面的两种循环都可以办到
#include<stdio.h>

int main(void)
{
    char line[81];
    // while(gets(line)) // 遇到文件结尾，gets() 函数就会返回空指针，循环结束
    //     puts(line);

    while(fgets(line,81,stdin))
        fputs(line,stdout);

    return 0;
}