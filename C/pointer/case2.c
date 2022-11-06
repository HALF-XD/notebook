// 输入 a、b、c3 个整数，按大小顺序输出。
// 函数的调用可以(而且只可以)得到得到一个返回值，而使用指针变量做参数，可以得到多个变化了的值。
// https://blog.csdn.net/weixin_43283397/article/details/103340088

#include <stdio.h>
int main()
{	
    void exchange(int *p1, int *p2, int *p3);   // 对swap函数的声明 
	int a, b, c;
	int *pointer_1, *pointer_2, *pointer_3;     // 定义两个int *型的指针变量
	
	printf("please enter a b and c:");
	scanf("%d,%d,%d",&a,&b,&c);
	pointer_1=&a;
	pointer_2=&b;
	pointer_3=&c;

	exchange(pointer_1,pointer_2,pointer_3);

	printf("The order is: %d,%d,%d\n",a,b,c);
	return 0;
}

// 定义swap函数
void exchange(int *p1,int *p2, int *p3)
{
	void swap(int *pt1,int *pt2);
	if(*p1 < *p2)   swap(p1,p2);
	if(*p1 < *p3)   swap(p1,p3);
	if(*p2 < *p3)   swap(p2,p3);
}

void swap(int *pt1,int *pt2)	
{
	int temp;
	temp=*pt1;			
	*pt1=*pt2;
	*pt2=temp;
}
