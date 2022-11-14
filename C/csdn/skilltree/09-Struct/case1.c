// 把一个学生的信息（包括学号、姓名、性别、住址）放在一个结构体变量中，然后输出这个学生的信息

# include<stdio.h>
int main()
{
struct Student 
{
	long int num;
	char name[20];
	char sex;
	char addr[20];
} a={101, "Shey",'M',"Lisss"};

printf("NO.%ld\n",a.num);
printf("name:%s\n",a.name);
printf("sex:%c\n",a.sex);
printf("address:%s\n",a.addr);
return 0;

}
