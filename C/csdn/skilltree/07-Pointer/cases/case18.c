// 字符指针变量作形参和实参

#include <stdio.h>

int main()
{
	void copy_string(char *from, char *to);
	char *a="I love china!";
	char b[]="You are a teacher!";

	char *p=b;

	printf("string a=%s\nstring b=%s\n",a,b);
	printf("copy string a to string b:\n");

	copy_string(a,p);

	printf("string a=%s\nstring b=%s\n",a,b);

	return 0;
}

void copy_string(char *from, char *to)
{
	for(;*from!='\0';from++,to++)
    {
        *to = *from; 
    }

	*to='\0';
}
