// 将字符串a赋值给字符串b,然后输出字符串b
// 方法:指针变量
#include <stdio.h>

int main()
{
	char a[]="I love china!", b[20], *p1, *p2;
	p1=a; 
	p2=b;
    printf("p1: %p, *p1: %c\n", p1, *p1);
    p1++;
    printf("p1: %p, *p1: %c\n", p1, *p1);
    p1++;
    printf("p1: %p, *p1: %c\n", p1, *p1);
    p1++;
    printf("p1: %p, *p1: %c\n", p1, *p1);
    p1++;
    printf("p1: %p, *p1: %c\n", p1, *p1);

	for(;*p1!='\0';p1++,p2++)
		*p2=*p1;
	*p2='\0';
	
	printf("string a is:%s\n", a);
	printf("string b is:%s\n", b);

	return 0;
}
