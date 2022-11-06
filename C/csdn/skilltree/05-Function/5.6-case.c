// 根据长方体的长宽高求它的体积以及三个面的面积。

#include <stdio.h>

int s1, s2, s3;

int vs(int a, int b, int c)
{
                                                                      
    int v;
    v = a * b * c;
    s1 = a * b;
    s2 = b * c;
    s3 = a * c;
    return v;
}

int main(int argc, char** argv)
{
    int v, length, width, height;
    printf("请分别输入长方体的长宽高：");
    scanf("%d,%d,%d", &length, &width, &height);

    v = vs(length, width, height);
    printf("v=%d, s1=%d, s2=%d, s3=%d\n", v, s1, s2, s3);

    return 0;
}