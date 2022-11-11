// 使用地址算术运算的方式，输出二维数组中的所有元素。

#include <stdio.h>
#define ROW 3
#define COL 4

int main(int argc, char** argv)
{
    int i, j;
    int mat[ROW][COL] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
                                  
    for (i = 0; i < ROW; ++i)
    {
        for (j = 0; j < COL; ++j)                                               
            printf("%d\t", *(*mat + (i * COL + j)));
        printf("\n");
    }

    return 0;
}
