//  查找一门以上课程不及格的学生，输出他们的全部课程的成绩

#include <stdio.h>
int main()
{
	void search(float(*p)[4],int n);
    float score[3][4]={{65,57,70,60},{58,87,90,81},{90,99,100,98}};
    search(score,3);
    return 0;
}
void search(float(*p)[4],int n)
{
  int i,j,flag;
  for(j=0;j<n;j++)
     {
       flag=0;
       for(i=0;i<4;i++)
         if(*(*(p+j)+i)<60) flag=1;
       
	   if(flag==1)
         {
			printf("NO.%d fails,his score are:\n",j+1);
			for(i=0;i<4;i++)
				printf("%5.1f",*(*(p+j)+i));
			printf("\n");
         } 
     }
}  

