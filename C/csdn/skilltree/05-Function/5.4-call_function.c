/*
1.函数调用时的参数传递
*/ 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	void swap(int a, int b);    //函数声明
	scanf("%d%d", &a, &b);	//键盘输入
	swap(a, b);		        //函数调用
	printf("输入的a,b值: a=%d b=%d\n", a, b);
	return 0;
}

void swap(int a, int b)
{
	int t;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;		//a中放大值，b中放小值
	}
	printf("从大到小排序的的a,b值:  a=%d b=%d\n", a, b);
}