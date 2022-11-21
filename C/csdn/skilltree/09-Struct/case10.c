// 编写一个输出链表的函数print
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

struct Student *creat(void)  //建立链表的函数
{
	struct Student *head;
	struct Student *p1, *p2;
	n = 0;   
	p1 = p2 = (struct Student *)malloc(LEN);  // 开辟一个新单元

	scanf("%ld,%f", &p1->num, &p1->score);    // 输入第一个学生的学号和成绩
	head = NULL;

	while (p1->num!=0)
	{
		n = n + 1;
		if (n == 1){head = p1; }
		else { p2->next = p1; }
		p2 = p1;
		p1 =(struct Student *)malloc(LEN);    // 开辟动态存储区，把起始地址赋给p1
		scanf("%ld,%f", &p1->num, &p1->score);  // 输入其他学生的学号和成绩
		
	}
	p2->next=NULL;
	return(head);

}

void print(struct Student *head)	// 输出链表的函数
{
	struct Student *p;
	printf("\nNow,These %d records are:\n",n);	//records记录
	p = head;	//p指向第1个结点
	if (head != NULL)	//若不是空表
	{
		do
		{
			printf("%ld   %5.1f\n", p->num, p->score);
			p = p->next;
		}while (p != NULL);
	}
}

int main()
{
	struct Student *head;
	head=creat();
	print(head);
    return 0;
}
