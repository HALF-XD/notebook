#include <stdio.h>

int main(void)
{
    const char *p = "abcd";
    const char str1[5] = "abcd";
    char str2[5] = "abcd";
    printf("%s\n",p);
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("abcd\n");
    return 0;
}

/* 隐患 编译器检查不出，运行出错
char *p = "abcd";
*p = 'A';
printf("%s\n",p);
*/ 