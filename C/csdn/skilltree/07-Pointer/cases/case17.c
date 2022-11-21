// 字符指针作函数参数
// 函数的形参和实参分别用字符数组名或字符指针变量
#include <stdio.h>

int main()
{
	void copy_string(char from[], char to[]);
	char a[]="I love china!";
	char b[]="You are a teacher!";

	printf("string a = %s\nstring b = %s\n",a,b);
	printf("copy string a to string b:\n");

	copy_string(a,b);

	printf("string a=%s\nstring b=%s\n",a,b);

	return 0;
}

void copy_string(char from[], char to[])
{
	int i = 0;
	while(from[i]!='\0')
	{
		to[i]=from[i];
		i++;
	}	
	to[i]='\0';
}
