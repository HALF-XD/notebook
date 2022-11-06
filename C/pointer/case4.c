// 通过指针变量输出整型数组 a 的5个元素

# include<stdio.h>

int main()
{
	int i,a[5],*p;
	p=a;
	printf("Please enter 5 integer numbers:\n");
	for(i=0;i<5;i++) scanf("%d",p++);
	for(i=0;i<5;i++,p++) printf("%d ",*p);
    // for(i=0;i<5;i++)  printf("%d", *p++);
	printf("\n");
	return 0;
}

/*
问题出在了指针变量 p 的指向上。
    指针 p 经过第一轮 for 循环后已经指向了数组 a 的末尾，
    执行第二个 for 循环时，指向 a 数组下面的10个存储单元，而这些单元中存储的值是难以预料的。
解决办法： 在第二个 for 循环之前加一个赋值语句： p = a
*/ 