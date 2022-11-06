// 用 while 实现输出数组 a 的前 5 个元素

# include<stdio.h>

int main()
{
	int i,a[5],*p;
	p=a;
	printf("Please enter 5 integer numbers:\n");
	for(i=0;i<5;i++) scanf("%d",p++);
	p=a;
	while(p<a+5) printf("%d ",*p++);
	printf("\n");
	return 0;
}
