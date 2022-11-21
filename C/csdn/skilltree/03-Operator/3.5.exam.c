/* 
打印邮费价格表，输出20kg以内物品的邮费价格表，邮费计算规则如下所示：
* 1kg以内6元。
* 超过1kg，每增加1kg加收2元。
*/ 

#include <stdio.h>
#define FIRST_COST 6
#define NEXT_COST 2

int main(int argc, char** argv)
{
    int weight, cost;

    printf("重量\t价格\n");
    for (weight=1,cost=FIRST_COST; weight<=20; ++weight,cost=FIRST_COST+NEXT_COST*(weight-1))
        printf("%d\t¥%d\n", weight, cost);

    return 0;
}