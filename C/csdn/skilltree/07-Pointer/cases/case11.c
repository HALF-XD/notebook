// 有一个班，3个学生，各学4门课，计算总平均分数以及第n个学生成绩

#include <stdio.h>

int main()
{
	void average(float *p,int n);
    void search(float (*p)[4],int n);
    float score[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
    average(*score,12);      //求12个分数的平均分
    search(score,2);         //求序号为2的学生的成绩
    return 0;
}
 
void average(float *p,int n)
{
	float *p_end;
    float sum=0,aver;
    p_end=p+n-1;            // n的值为12时，p_end 的值是 p+11,指向最后一个元素
    for(;p<=p_end;p++)
		sum=sum+(*p);
    aver=sum/n;
    printf("average=%5.2f\n",aver);
}
 
void search(float (*p)[4],int n)
{
	int i;
    printf("The score of No.%d are:\n",n);
    for(i=0;i<4;i++)
      printf("%5.2f ",*(*(p+n)+i));
    printf("\n");
}
