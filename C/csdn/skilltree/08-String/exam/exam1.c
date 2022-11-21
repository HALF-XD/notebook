#include <stdio.h>
#define STR_LEN 101

void reverse(char *str)
{
    char* head = str;    
    char* tail = str;
    char ch;
 
    while(*tail++);
    tail -= 2;
    // 经过 while(*tail++); 之后，tail指针已经指向了字符串的最末尾（'\0'）后面的位置，
    // 所以，tail减一指向'\0'，再减一则指向末尾的一个有效字符。
    // tail -= 2;其实就是将指针向前移动两个步长。
 
    while(head < tail)
    {
        ch = *head;
        *head++ = *tail;
        *tail-- = ch;
    }
}

int main(int argc, char** argv)
{
    char str[STR_LEN];
    char *rev_str = NULL;
    
    // printf("请输入一个字符串(length<=100): \n");
    // scanf("%s", str);
    // reverse(str);
    // printf("反转后的字符串为:\n%s\n", str);

    // puts("请输入一个字符串(length<=100):");
    // gets(str);
    // reverse(str);
    // puts("反转后的字符串为:");
    // puts(str);

    // fputc("请输入一个字符串(length<=100):",stdout);
    // fgetc(str);
    // reverse(str);
    // fputc("反转后的字符串为：", stdout);
    // fputc(str, stdout);

    fputs("请输入一个字符串(length<=100): \n", stdout);
    fgets(str, STR_LEN, stdin);
    reverse(str);
    fputs("反转后的字符串为：", stdout);
    fputs(str, stdout);

    return 0;
}
