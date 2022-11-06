// 输入a和b两个整数，按先大后小的顺序输出a和b

#include <stdio.h>
void swap_1(){
	int *p1, *p2, *tmp, a, b; // p1, p2的类型是int *类型
	printf("please enter two integer numbers:");
	scanf("%d, %d", &a, &b);// 输入两个整数 
	p1=&a;				    // 使p1指向变量a
	p2=&b;					// 使p2指向变量b
	if(a < b){ tmp=p1; p1=p2; p2=tmp; }
	printf("a=%d, b=%d\n", a, b);			// 输出a,b
	printf("max=%d, min=%d\n", *p1, *p2);	// 输出p1和p2所指向的变量的值
}

void swap_2(){	
	int *p1, *p2, a, b;				
	printf("please enter two integer numbers:");
	scanf("%d, %d", &a, &b);			
	p1=&a;					
	p2=&b;			
	if(a<b){ p1=&b; p2=&a; }	
	
	printf("a=%d,b=%d\n",a,b);			
	printf("max=%d,min=%d\n",*p1,*p2);
}

int main(){	
	swap_1();
	swap_2();
}
