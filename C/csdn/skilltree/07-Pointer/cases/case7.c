// ** 如果让指针变量做形参，必须先使指针变量有确定值，指向一个已定义的对象
// 用指针方法对10个整数按由小到大顺序排列

# include<stdio.h>

int main()
{
	void sort1(int x[], int n);
    void sort2(int *x, int n);
	int i, a[10], *p;
	p = a;

	printf("Please enter 10 integer numbers:\n");
	for(i=0;i<10;i++)
		scanf("%d", p++);

	p = a;   // 重新返回指向首地址
	sort2(p,10);
	
	printf("The array has been inverted:\n");
	p = a;
	for(i=0;i<10;i++,p++)
		printf("%d ", *p);
	
	printf("\n");
	return 0;
}

void sort1(int x[], int n)
{
	int i, j, k, temp;
	
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(x[i]<x[j])
			{
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}

// 形参为指针
void sort2(int *x, int n)
{
	int i, j, k, temp;
	
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(*(x+i)<*(x+j))
			{
				temp = *(x+i);
				*(x+i) = *(x+j);
				*(x+j) = temp;
			}
		}
	}
}
