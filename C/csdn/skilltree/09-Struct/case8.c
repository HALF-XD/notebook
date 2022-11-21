// 建立简单链表，它由 3 个学生数据的结点组成，要求输出各结点中的数据。

/* 
10101  89.5
10103  90.0
10107  85.0
*/ 
#include <stdio.h>

struct Student
{
	int num;
	float score;
	struct Student *next;
};

int main()
{
	struct Student a,b,c,*p,*head;
    // 初始数据
	a.num=10101; a.score=89.5;
	b.num=10103; b.score=90;	
	c.num=10107; c.score=85;

	head=&a;    //  将结点a的起始地址赋给头指针head
	a.next=&b;  //  将结点b的起始地址赋给a结点的next成员
	b.next=&c;
	c.next=NULL;
	p=head;

    // 输出链表数据
	do
	{
		printf("%ld %5.1f\n",p->num, p->score);
		p=p->next;
	}while(p!=NULL);

	return 0;
}

