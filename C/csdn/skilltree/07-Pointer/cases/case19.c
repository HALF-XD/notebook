// 有 a 个学生，每个学生有 b 门成绩。要求在用户输入学生的学号后，能输出该学生的全部成绩。用指针函数实现。

# include<stdio.h>

int main()
{
	float *search1(float (*pointer)[4], int m);
    float *search2(float score[][4], int m);

	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	float * p;
	int i,k;

	printf("Enter the number of student:");
	scanf("%d",&k);
	printf("The score of No.%d are:\n",k);
	p=search1(score,k);
	// p=search2(score,k);
	
	for(i=0;i<4;i++)
		printf("%5.2f\t", *(p+i));
	printf("\n");
	return 0;
}

float *search1(float (*pointer)[4], int m)
{
	float *pt;
	pt = *(pointer+m);
	return pt;
}

float *search2(float score[][4], int m)
{
	float *pt;
	pt = &score[m-1][4];  // 根据指针指向与实际数据，因此减1
	return pt;
}
