/* 英文字母判断
判断一个字符是否是英文字母。
*/
/*
ASCII（American Standard Code for Information Interchange，美国标准信息交换代码）是基于拉丁字母的一套电脑编码系统，主要用于显示现代英语和其他西欧语言。
*/ 
/*
scanf() 读变量的时候需要其实际存储的地址。
%c是字符型，把输入的数字按照ASCII码相应转换为对应的字符。
字符型取地址要加&。
字符串数组或字符串指针变量，由于数组名可以转换为数组和指针变量名本身就是地址，就不加&。
*/ 
#include <stdio.h>
int main(){
    char ch;
    printf("Please enter one character\n"); 
    scanf("%c", &ch);
    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90)) 
    // if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    // if((0 <= (ch - 'a') && (ch - 'a') < 26) || (0 <= (ch - 'A') && (ch - 'A') < 26))
        printf("The character %c is an English letter\n", ch);
    else
        printf("The character %c is not an English letter\n", ch);
    return 0;
}