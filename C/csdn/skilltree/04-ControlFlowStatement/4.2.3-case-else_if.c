// 输入三角形各边的长度，并判断三角形的类型。

#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
    float a, b, c;

    printf("请输入三角形的三条边：");
    scanf("%f,%f,%f", &a, &b, &c);
    
    if (a + b <= c || b + c <= a || a + c <= b)
        printf("不能构成三角形\n");
    else if (a == b && a == c)
        printf("三角形是等边三角形\n");
    else if (a == b || a == c || b == c)
        printf("三角形是等腰三角形\n");
    else if ((a * a + b * b == c * c) || 
             (a * a + c * c == b * b) || 
             (b * b + c * c == a * a))
        printf("三角形是直角三角形\n");
    else
        printf("三角形是普通三角形\n");

    return 0;
}