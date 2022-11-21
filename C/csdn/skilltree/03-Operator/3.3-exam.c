// 输入两个闭区间，并判断两个区间是否重叠。

#include <stdio.h>

#define MAX(a,b) ((a > b) ? a : b)
#define MIN(a,b) ((a < b) ? a : b)

int main(int argc, char** argv)
{
    int start_1, end_1;
    int start_2, end_2;
    printf("请输入第1个闭区间(逗号分隔):");
    scanf("%d,%d", &start_1, &end_1);
    printf("请输入第2个闭区间(逗号分隔):");
    scanf("%d,%d", &start_2, &end_2);

    // end_1 < start_2 || start_1 > end_2
    if (MIN(end_1, end_2) < MAX(start_1, start_2))
        printf("两个区间不重叠！");
    else
        printf("两个区间重叠！");

    return 0;
}