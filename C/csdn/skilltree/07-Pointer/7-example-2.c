// 对输入的两个整数按大小顺序输出。
// 用函数处理，而且用指针类型的数据作函数参数。

#include <stdio.h>

int main(){	
	void swap(int *p1,int *p2);	// 对swap函数的声明 
	int a, b;
	int *pointer_1, *pointer_2;	// 定义两个int *型的指针变量
	
	printf("please enter a and b:");
	scanf("%d, %d", &a, &b);	// 输入两个整数
	pointer_1 = &a;	// 使 pointer_1 指向 a
	pointer_2 = &b;	// 使 pointer_2 指向 b
	
	if(a<b) swap(pointer_1,pointer_2); 	// 如果 a<b，调用swap函数
	printf("max=%d,min=%d\n", a, b); 	// 输出结果
	
	return 0;
}
 
void swap(int *p1,int *p2)	// 定义swap函数
{	int temp;
	temp=*p1;				// 使*p1和*p2互换
	*p1=*p2;
	*p2=temp;
}

/* 说明：
在函数调用时，将实参变量的值传送给形参变量，采取的依然是值传递的方式.
因此 p1 的值为 &a，p2 的值为 &b。
这时，p1 和 pointer_1 都指向变量 a，p2 和 pointer_2 都指向变量 b，执行 swap函数体后，*p1 和 *p2 的值互换，相当于 a 与 b 的值互换。
函数调用结束后，形参 p1 和 p2 不复存在 (被释放)，此时，a 与 b 已经是交换后的值。
*/ 

