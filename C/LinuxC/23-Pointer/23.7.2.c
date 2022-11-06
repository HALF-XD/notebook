#include <stdio.h>
/* 23.7 习题 
要想通过pa或ppa访问数组a中的'r'元素，分别应该怎么写？
思路？
pa指向一维数组，a[i][j]指向了一维数组
ppa指向到是二维数组， a[i]指向了一个二维数组
*/ 

int main(void)
{
    char a[4][3][2] = {
        {{'a', 'b'}, {'c', 'd'}, {'e', 'f'}},
		{{'g', 'h'}, {'i', 'j'}, {'k', 'l'}},
		{{'m', 'n'}, {'o', 'p'}, {'q', 'r'}},
	    {{'s', 't'}, {'u', 'v'}, {'w', 'x'}}
    };

    char (*pa)[2] = &a[1][0];
    char (*ppa)[3][2] = &a[1];
    printf("langx pa = %c, ppa = %c \n",(*pa)[0],(*ppa)[0][0]);
    
    pa=pa+5;
    ppa=ppa+1;
    printf("langx pa = %c, ppa = %c \n",(*pa)[1],(*ppa)[2][1]);

    return 0;
}