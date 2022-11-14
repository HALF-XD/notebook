/* 有若干个人员的数据，其中有学生和教师。
学生的数据包括：姓名、号码、性别、职业、班级。
教师的数据包括：姓名、号码、性别、职业、职务。
要求用同一个表格来处理。
*/ 

/* 输入
第一行有一个整数n，表示以下n行分别表示n个人员的数据。
保证n不超过100。之后的n行，每行有5项用空格隔开的内容。
前4项分别为人员的号码（整数）、姓名（长度不超过9的无空格字符串）、性别（字符，m或f）和职业（字符，s或t）。
如果第4项是s，则第5项为一个整数，表示班级；
如果第4项是t，则第5项为一个长度不超过9的无空格字符串，表示职务。
*/ 

/* test data:
2
please enter the data of person:
101 Li f s 501
please enter the data of person:
102 Wang m t prof

No.   name     sex  job class/position
101   Li        f   s   501
102   Wang      m   t   prof
*/ 

#include<stdio.h>
struct person {
	int num;
	char name[10];
	char sex;
	char job;
	union {
	    int clas;  //here class definited clas,因为class是标识符类
	    char position[10];
	}category; // 成员category是共用体变量
}data[100];

int main(){
	
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
		printf("please enter the data of person:\n");
		scanf("%d %s %c %c",&data[i].num,data[i].name,&data[i].sex,&data[i].job);
		
		if(data[i].job=='s')
			scanf("%d",&data[i].category.clas);
		else if(data[i].job=='t')
			scanf("%s",data[i].category.position);
		else 
			printf("Error!\n");
	}
	printf("\n");
	printf("No.   name     sex  job class/position\n");
	
    for (i = 0; i < n; i++)          
	{
		if (data[i].job == 's')
			printf("%-6d%-10s%-4c%-4c%-10d\n",data[i].num,data[i].name,data[i].sex,data[i].job,data[i].category.clas);
		else
			printf("%-6d%-10s%-4c%-4c%-10s\n",data[i].num,data[i].name,data[i].sex,data[i].job,data[i].category.position);
	}
	return 0;
}
