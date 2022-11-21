// 有n个学生的信息(包括学号、姓名、成绩)，要求按照成绩的高低顺序输出各学生的信息

#include<stdio.h>
#define N 3

struct Student
{
	int num;
	char name[20];
	float score;
};

int main()
{
	struct Student stu[N]={
        {1001,"zhang",78},
        {1002,"wang",80},
        {1003,"li",77}
    }; // 定义结构体数组并初始化
	struct Student temp;
	int i,j,k;

	printf("The order is:\n");
	for(i=0;i<N-1;i++)
	{
		k=i;
		for(j=i+1;j<N;j++)
		if(stu[j].score>stu[k].score)  // 成绩比较
			k=j;

		temp=stu[k];
		stu[k]=stu[i];
		stu[i]=temp;
	}
	
	for(i=0;i<N;i++)
	{
		printf("%6d%8s %6f\n",stu[i].num,stu[i].name,stu[i].score);
	}
	printf("\n");

	return 0;
}
