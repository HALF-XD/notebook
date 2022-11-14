// 口袋中有红、黄、蓝、白、黑5种颜色的球若干。
// 每次从口袋中先后取出3个球，问得到3种不同颜色的球的可能取法，输出每种排列的情况
// 枚举 enumeration 的例子
#include <stdio.h>
 
int main()
{
	enum color {red,yellow,blue,white,black};
    // enum color i, j, k, pri;   
    // VC 中i，j，k不能这么定义 (c中是可以这么定义和使用的)
	int i, j, k, pri;
	int n = 0, loop;
 
	for(i=red;i<=black;i++)
		for(j=red;j<=black;j++)
			if (i != j)
			{
				for (k = red; k <= black; k++)
				{
					if ((k != i) && (k != j))
					{
						n = n + 1;
						printf("%-4d", n);
						for (loop = 1; loop <= 3; loop++)
						{
							switch (loop)
							{
								case 1:pri = i; break;
								case 2:pri = j; break;
								case 3:pri = k; break;
								default:break;
							}
 
							switch (pri)
							{
								case red:
                                    printf("%-10s", "red"); 
                                    break;
								case yellow:
                                    printf("%-10s", "yellow");
                                    break;
								case blue:
                                    printf("%-10s", "blue");
                                    break;
								case white:
                                    printf("%-10s", "white");
                                    break;
								case black:
                                    printf("%-10s", "black");
                                    break;
								default:
                                    break;
							}
						}
						printf("\n");
					}
				}
			}
 
	printf("\ntotal:%5d\n", n);

    return 0;
}

