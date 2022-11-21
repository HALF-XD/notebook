// 通过指针引用字符串

// 通过字符指针变量引用一个字符串常量

#include <stdio.h>

int main()
{
	char *string="I love china!";   // 把字符串的第1个元素的地址赋给字符指针变量 string
	printf("%s\n",string);
	return 0;
}