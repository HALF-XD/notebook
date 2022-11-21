/*
输入成绩(百分制)，将成绩转换为相应的等级，并输出。具体转换规则为：

* 大于等于90分为等级A；
* 小于90分且大于等于80分为等级B；
* 小于80分且大于等于70分为等级C；
* 小于70分且大于等于60分为等级D；
* 小于60分为等级E。
*/

#include<stdio.h>

int main(int argc, char** argv)
{
    int score;
    printf("请输入成绩：");
    scanf("%d", &score);
    if ((score > 100) || (score < 0))
    {
        printf("请输入百分制的成绩！");
        return 0;
    }

    int quotient = score / 10;
    
    switch(quotient) {
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6: 
            printf("D");
            break;
        default:
            printf("E");
            break;
    }

    return 0;
}