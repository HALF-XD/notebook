#include <stdio.h>

int array()
{
    int i,j,a[10][10];
    printf("Output the number of two-dimensional array!\n");
    for(i=0;i<10;i++) //i为行下标；
        for(j=0;j<10;j++) //j为列下标；
            if(i<=j) a[i][j]=1; //生成矩阵;
            else a[i][j]=i-j+1;
    
    for(i=0;i<10;i++) //按行输出二维数组；
    {
        for(j=0;j<10;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

int main()
{
    // array();
   
    int a[5][10];
    int (*pa)[10] = &a[0];

    printf("%p\n", &a );
    printf("%p\n", pa );

    printf("%d\n", a[1][2]);
    printf("%d\n", pa[1][2]);

    return 0;
}

// int main()
// {
//     int a[5] = {1,2,3,4,5};
//     for(int i = 0; i< 5;i++)
//     {
//         printf("loop: %d\n", a[i]);
//     }
//     printf("%p\n", &a );
//     int (*pa)[5] = &a;
//     printf("%p\n", pa );
// }