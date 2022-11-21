/* 
%d digit
%c char
%s string
%f 
%e exponent 指数
%i
%o
%x
%u unsigned integer
%g
%p pointer  地址 指针
%m.nf

C语言中输出格式%m.nf的意思
m：表示宽度
.n：表示精度
假设，
i=10.1;
printf("%5.2f",i);
输出结果为 10.10(m=5，其中空格占1位，小数(n)占2位)
*/

#include <stdio.h>

void numbers(){
    printf("%d\n", 123);    // 有符号十进制整数
    printf("%5d\n", 123);   // 数据占据5列且数据靠右
    printf("%-5d\n", 123);  // 数据占据5列且数据靠左
    printf("%+d\n", 123);   // 输出整数前的正负号

    int d;  // scanf中 %5d 则表示只读取前5位整数
    printf("请输入超过5位的整数：\n"); 
    scanf("%4d", &d);
    printf("结果为: %d\n",d); 

    long int m = 10;
    printf("%ld\n", m);     // 长整型为 %ld

    long long int n = 100;
    printf("%lld\n", n);    // 双长整型为 %lld
}

void string(){  
    printf("%c\n", 'a');        // c格式符。用来输出一个字符
    printf("%s\n", "abcdefg");  // s格式符。用来输出一个字符串
    printf("%5s\n", "ab");      // 数据占据5列且数据靠右
    printf("%-5s\n", "ab");     // 数据占据5列且数据靠左

    char str[]= "";  // scanf中 %5s 则表示只读取前5个字符
    printf("请输入超过5位的字符串：\n"); 
    scanf("%5s", &str);
    printf("结果为: %s\n",str); 
}

int main(){
    // numbers()
    // string()

    // int a,b;
    // printf("请输入两个数\n"); 
    // scanf("a=%d, b=%d", &a, &b); // 输入则必须为 a=1, b=2
    // printf("a=%d, b=%d",a,b); 
    
    int i = 0;
    printf("请输入一个数：\n"); 
    scanf("%i", &i); // %i 则可以匹配八进制、十进制、十六进制表示的整数
    printf("转为十进制为：%d\n",i); 

    int p = 017, q = 0x54;
    printf("%i\n", p);  // 
    printf("%i\n", q); 
}