
#include <stdio.h>
int main()
{
	int a=3, b=4, c=5;
	int x=0, y=0;
	y=(x=a+b),(b+c); 		// 逗号分隔开，使得y=x=a+b
	printf("1st y = %d\n", y);
	y=((x=a+b),(b+c));		// 最后一项为返回值
	printf("2nd y = %d\n", y);
}