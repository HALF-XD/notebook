/* 基于二维数组实现矩阵转置

1   2   3   4
5   6   7   8 
9   10  11  12 
   ↓↓↓↓
1   5   9
2   6   10
3   7   11
4   8   12
*/ 

#include <stdio.h>
#define LEN 101

void print_matrix(int mat[][LEN], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}

int main(int argc, char** argv)
{
    int i, j, row, col, num, m[LEN][LEN], t[LEN][LEN];

    printf("请输入矩阵的行数(<=100)：");
    scanf("%d", &row);
    printf("请输入矩阵的列数(<=100)：");
    scanf("%d", &col);
    num = row * col;
    printf("请输入矩阵的元素(共%d个，空格分隔)：\n", num);
    for (i = 0; i < row; ++i)
        for (j = 0; j < col; ++j)
            scanf("%d", &m[i][j]);

    printf("转置前：\n");
    print_matrix(m, row, col);

    for (i = row - 1; i >= 0; --i)
        for (j = col - 1; j >= 0; --j)
            t[j][i] = m[i][j];

    // for (i = 0; i < row * col; ++i)
    //     t[i / row][i % row] = m[i % row][i / row];

    // for (i = 0; i < row; ++i)
    //     for (j = 0; j < col; ++j)
    //         t[j][i] = m[i][j];

    printf("转置后：\n");
    print_matrix(t, col, row);

    return 0;
}