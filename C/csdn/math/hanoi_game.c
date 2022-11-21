// 汉诺塔问题为经典的递归调用实例。

// 分析：将n个盘子从A座上移到C座上需要三步：
// （1）将A上的n-1个盘子借助C座先移到B座上；
// （2）把A座上剩下的一个盘子移到C座上；
// （3）将n-1个盘从B座上借助于A移到C座上。


/*
解题思路
假设由N个盘子，只需要考虑第N个盘子和其上N−1个盘子的整体。
显然思路就是，第 N 个是要放在 C 柱上的，

首先将 N−1个整体是先放在B柱上；
其次将第 N 个放在 C 柱上；
最后将 N−1个整体放到 C 柱上。
即：第 N 个 A→B， N−1个整体 A→B→C 。然后再考虑 N−1个中把第 N−1个当作最后一个，其上N−2个当作整体，到最后只剩一个直接放到 C 柱上。这便是递归的整体思路。
*/ 

#include<stdio.h>
#include<stdlib.h>

void move(int n, char x, char y)	// 输出移盘方案
{
	printf("%d %c->%c\n", n, x, y);
}

void hanoi(int n, char one, char two, char three) // 移盘
{
	if (n == 1)
		move(n, one, three);		//如果是1个盘，直接从第一个座移到第3个座上
	else
	{
		hanoi(n - 1, one, three, two);		
		move(n, one, three);
		hanoi(n - 1, two, one, three);
	}
}

int main()
{
	int n;
	printf("输入盘的个数\n");
	scanf("%d", &n);
	printf("移盘的步骤：\n");
	hanoi(n, 'A', 'B', 'C');
	return 0;
}