// 有n个结构体变量，内含学生学号，姓名和3门课程的成绩。要求输出平均成绩最高的学生信息(包括学号、姓名、3门课程成绩和平均成绩)

/* test data:
101 Li 88 89 09
102 Zhang 99 90 98
105 Mu 98 89 93
*/ 
#include <stdio.h>
#define N 3

struct Student
{
	int num;
	char name[20];
	float socre[3];
	float aver;
};
void input(struct Student stu[])
{
	int i;
	printf("输入各学生的信息：姓名、学号、三门课成绩：\n");
	for(i=0;i<N;i++)
	{
		scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,
			&stu[i].socre[0],&stu[i].socre[1],&stu[i].socre[2]);
		stu[i].aver=(stu[i].socre[0]+stu[i].socre[1]+stu[i].socre[2])/3;
	}
}
struct Student max(struct Student stu[])
{
	int i,m=0;
	for(i=0;i<N;i++)
		if(stu[i].aver>stu[m].aver)
			m=i;
	return stu[m];
}
void print(struct Student stud)
{
	printf("\n成绩最高的学生是：\n");
	printf("学号：%d\n 姓名：%s\n 三门课成绩：%5.1f,%5.1f,%5.1f\n 平均成绩：%6.2f\n",stud.num,stud.name,stud.socre[0],stud.socre[1],stud.socre[2],stud.aver);
}
int main()
{
	struct Student stu[N],*p=stu;
	input(p);
	print(max(p));
	return 0;
}

