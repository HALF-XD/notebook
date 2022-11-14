// 写一个函数建立一个有 3 名学生数据的单向动态链表。
/* test data:
10101,89.5
10103,90
10105,85
0
*/ 
#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct Student)

struct Student
{
	long num;
	float score;
	struct Student *next;
};

int n;  // n为全局变量

struct Student *creat(void)     // 定义函数返回一个指向链表头的指针
{

	struct Student *head;
	struct Student *p1, *p2;
	n = 0;   
	p1 = p2 = (struct Student *)malloc(LEN);  // 开辟一个新单元

	scanf("%ld,%f", &p1->num, &p1->score);    // 输入第一个学生的学号和成绩
	head = NULL;

	while (p1->num != 0)  // 0 为结束
	{
		n = n + 1;
		if (n == 1){ head = p1; }
		else { p2->next = p1; }
		p2 = p1;
		p1 =(struct Student *)malloc(LEN);    // 开辟动态存储区，把起始地址赋给p1
		scanf("%ld,%f", &p1->num, &p1->score);  // 输入其他学生的学号和成绩
	}
	p2->next=NULL;
	return(head);
}

int main()
{
	struct Student *pt;
	pt = creat();     //函数返回链表第1个结点的地址
	printf("\nnum=%ld\nscore=%5.1f\n", pt->num, pt->score);   //输出第1个结点的成员值

	return 0;
}
