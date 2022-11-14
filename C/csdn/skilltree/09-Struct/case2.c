// 输入两个学生的学号、姓名，成绩，输出成绩较高的学生的学号、姓名，成绩

# include<stdio.h>
int main()
{
	struct student 
	{
		int num;
		char name[20];
		float score;
	} student1, student2;

	printf("Please input num name grade, Format: 11 Shey 87\n");
	printf("1st:");
	scanf("%d %s %f",&student1.num,student1.name,&student1.score);
	printf("2nd:");
	scanf("%d %s %f",&student2.num,student2.name,&student2.score);

	struct student stu;
	if(student1.score == student2.score){
		printf("even:\n");
		printf("%d %s %6.2f\n", student1.num,student1.name,student1.score);	
		printf("%d %s %6.2f\n", student2.num,student2.name,student2.score);
	}
	else{
		printf("The high score is: \n");
		if(student1.score > student2.score)
			stu = student1;
		else
			stu = student2;
		printf("%d %s %6.2f\n", stu.num,stu.name,stu.score);
	}
	return 0 ;

}

