#include<stdio.h>
#include<stdlib.h>

int max2(int a, int b)  // 找出a和b中的最大值
{
	if (a >= b) return a; 
	return b;
}

int max4(int a, int b, int c, int d) // 定义找4个数最大值的函数
{
	int m; // 存最大值
	m = max2(a, b);	
	m = max2(m, c);	
	m = max2(m, d);	
	return m;
}

int main()
{
	int a, b, c, d;
	int max;
	printf("请输入四个数,用空格隔开：\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	max = max4(a, b, c, d);			//调用max4函数
	printf("最大数为：%d\n", max);
	return 0;
}