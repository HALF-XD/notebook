/* 输入任意年份的正整数n，判断该年份是否为闰年。

闰年的定义：
1. 能被400整除的年份为闰年。
2. 能被4整除同时不能被100整除年份为闰年。

闰年的由来：
闰年（Leap Year）是为了弥补因人为历法规定造成的年度天数与地球实际公转周期的时间差而设立的。补上时间差的年份为闰年。闰年共有366天（1月~12月分别为31天、29天、31天、30天、31天、30天、31天、31天、30天、31天、30天、31天）。
闰年一年的时间为：366天，2月份有29天。
平年一年的时间为：365天，2月份有28天。
闰年与所有年份之间的集合关系如下(黄色部分为闰年)：
*/ 

#include <stdio.h>

void is_leap_year(int year)
{
    if (year % 400 == 0)
        printf("%d 此年是闰年\n", year);
    else
    {
        if (!(year % 4 != 0) && !(year % 100 == 0))
            printf("%d 是闰年\n", year);
        else
            printf("%d 非闰年\n", year);
    }
}

int main(){
    int year = 0;
    printf("请输入年份：");
    scanf("%d", &year);
    is_leap_year(year);
}