// 输出二维数组任一行任一列元素的值

# include<stdio.h>
int main()
{
	int a[3][4] = {{1,3,5,7},{9,11,13,15},{17,19,21,23}};
	int (*p)[4], i ,j;         //指针变量 p 指向包含4个整型元素的一维数组

	p=a;                                      // p指向二维数组的0行           
	
	printf("please enter row and column:\n");
	scanf("%d,%d",&i, &j);                    //输出要求输出的元素的行列号

	printf("a[%d,%d]=%d\n", i,j,*(*(p+i)+j)); // 输出a[i][j]的值

	printf("\n");
	return 0;
}
