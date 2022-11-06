// 对输入的两个整数按大小顺序输出。
// 现用函数处理，而且用指针类型的数据作函数参数。
// https://blog.csdn.net/weixin_43283397/article/details/103340088

#include <stdio.h>
int main()
{	
    void swap(int *p1,int *p2);	
	int a=10, b=90;

    // 定义两个int *型的指针变量
	int *pointer_1,*pointer_2;	
	pointer_1=&a;	                    // 使pointer_1指向a, 使pointer_2指向b 		
	pointer_2=&b;

	if(a<b) swap(pointer_1, pointer_2);  // 如果a<b，调用swap函数
	printf("max=%d,min=%d\n",a,b);      // 输出结果
	return 0;
}

// 定义swap函数
void swap(int *p1,int *p2)	// *p1就是a, *p2就是b, 是整型变量		
{	
	printf("before\n");
	printf("p1: %p, *p1: %d \n", p1, *p1);
    printf("p2: %p, *p2: %d \n", p2, *p2);

	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;

	printf("after\n");
	printf("p1: %p, *p1: %d \n", p1, *p1);
    printf("p2: %p, *p2: %d \n", p2, *p2);
}

/* 错误思路1
*temp 是指针变量 temp 所指向的变量。
但由于未给 temp 赋值，因此，temp中的值是不可预见的，所以 temp 所指向的单元也是不可预见的。
所以，对 *temp 赋值就是向一个未知的存储单元赋值，而这个存储单元可能存在着一个有用的数据，这样就可能破坏系统的正常工作状况。
*/ 
void swap_false1(int *p1,int *p2)
{	
	int *temp;
	*temp=*p1;					
	*p1=*p2;
	*p2=*temp;
}

/* 错误思路2
	注意: 不能企图通过改变指针形参的值而使指针实参的值改变。
	C语言中实参变量和形参变量之间的数据传递是单向的值传递方式。
	指针变量做函数参数同样要遵循这一规则
*/ 
void swap_false2(int *p1,int *p2)
{	
	int *temp;
	temp=p1;			
	p1=p2;
	p2=temp;
}

