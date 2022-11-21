// void指针类型

# include<stdio.h>
# include<stdlib.h>
int main()
{
	void check(int *p);
	int *p1,i;
	p1 = (int *)malloc(5*sizeof(int)); // 开辟动态内存区，将地址转换为 int * 型，然后放在p1中
    printf("Please enter five numbers, and separated by Spaces:\n");
	for(i=0;i<5;i++)
		scanf("%d", p1+i);
	check(p1);
	return 0;
}

void check(int *p)
{
	int i;
	printf("They are less than 60:");
	for(i=0;i<5;i++)
		if(p[i]<60)
			printf("%d ",p[i]);
	printf("\n");
}
