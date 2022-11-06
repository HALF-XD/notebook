// 有一个整型数组 a,有5个元素，要求输出数组中的全部元素

# include<stdio.h>

// 下标法
void m1()
{ 
	int i,a[5];
    printf("Please enter 5 integer numbers:\n");
	for(i=0;i<5;i++) scanf("%d",&a[i]);
	for(i=0;i<5;i++) printf("%d ",a[i]);
	printf("\n");
}

// 通过数组名计算数组元素地址，找出元素的值
void m2()
{ 
	int i,a[5];
	printf("Please enter 5 integer numbers:\n");
	for(i=0;i<5;i++) scanf("%d",&a[i]); // or scanf("%d",a+i)
	for(i=0;i<5;i++) printf("%d ",*(a+i));
	printf("\n");
}

// 用指针变量指向数组元素
void m3()
{ 
	int i,a[5],*p;
	p = a; // or  p=&a[0]
	printf("Please enter 5 integer numbers:\n");
	for(i=0;i<5;i++) scanf("%d",p+i);
	for(i=0;i<5;i++) printf("%d ",*(p+i));
	printf("\n");
}

void m4()
{ 
	int i,a[5],*p;
	printf("Please enter 5 integer numbers:\n");
	for(i=0;i<5;i++) scanf("%d",&a[i]);
	for(p=a;p<(a+5);p++) printf("%d ",*p);
	// 错误：a 代表数组首元素的地址，是一个指针型常量
	// for(p=a;a<(p+5);a++) printf("%d ",*a);   		
	printf("\n");
}

int main()
{
	// m1();
	// m2();
	m3();
	// m4();
	return 0;
}


