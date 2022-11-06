// 将数组 a 中 n 个整数按相反顺序存放

# include<stdio.h>

int main()
{
	void inv1(int x[], int n);
    void inv2(int *x, int n);
	int i, a[10];

	printf("Please enter 10 integer numbers:\n");
	for(i=0;i<10;i++) scanf("%d", &a[i]);

	inv1(a,10);
	
	printf("The array has been inverted:\n");
	for(i=0;i<10;i++) printf("%d ", a[i]);
	
	printf("\n");
	return 0;
}

void inv2(int x[], int n)
{
	int temp, j;

	for(j=0;j<=(n-1)/2;j++)
	{
		temp = x[j];
		x[j] = x[n-j-1];
		x[n-j-1] = temp;
	}
}

void inv2(int *x, int n)
{
	int temp, j, m=(n-1)/2;
	
	for(j=0;j<=m;j++)
	{
		temp = *(x+j);
		*(x+j) = *(x+n-j-1);
		*(x+n-j-1) = temp;
	}
}

void inv3(int *x, int n)
{
	int temp, *i, *j, *p, m=(n-1)/2;

	i=x; j=x+n-1; p=x+m; 

	for(;i<=p;i++,j--)
	{
		temp = *i;
		*i = *j;
		*j = temp;
	}
}