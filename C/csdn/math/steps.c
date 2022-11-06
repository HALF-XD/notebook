/*
初阶版本
青蛙一次可以跳一级台阶，也可以跳两级台阶。求该青蛙跳n级台阶共有多少种跳法？
进阶版本
青蛙一次可以跳一级台阶，也可以跳两级台阶，……，也可以跳n级台阶，求该青蛙跳上n级台阶的跳法种数。

解题思路
反向思考，当青蛙跳到最高阶 N 阶时，他是怎么跳到第 N 阶的呢？
有两种情况，
从第 N−1 阶，跳到第 N 阶，最后一次跳一阶。
从第 N−2 阶，跳到第 N 阶，最后一次跳两阶。
*/ 

#include<stdio.h>

int fib(int n)
{
	if (n > 1)
		return fib(n - 1) + fib(n - 2);
	else
		return 1;
}

int main()
{
	int n,a;
	printf("输入step的个数\n");
	scanf("%d", &n);
    printf("个数: %d\n",fib(n));
	return 0;
}