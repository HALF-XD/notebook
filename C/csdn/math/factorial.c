// 用递归求n的阶乘

#include<stdio.h>
#include<stdlib.h>

int non_fac(int n) // 非递归
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}

int fac(int n) // 定义函数
{
	int f;
	if (n < 0)
		printf("数据错误\n");
	else if (n == 0 || n == 1)
		f = 1;
	else
		f = n * fac(n - 1);	// n!=n*(n-1)
	return f;
}

int main()
{
	int n, y;
	printf("请输入n的值\n");
	scanf("%d", &n);
	y = fac(n);	// 这里n为实参
	printf("%d!=%d\n", n, y);
	return 0;
}
