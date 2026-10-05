#include<stdio.h>
#include<stdlib.h>

struct student
{
	char name[50];
	double score;
};
int main()
{
	int n;
	printf("请输入学生个数：\n");
	scanf("%d",&n);
	
	struct student *p=(struct student*)malloc(n*sizeof(struct student));
	printf("请依次输入学生的姓名和成绩：\n");
	for(int i=0;i<n;i++)
	{
		scanf("%s %lf",&p[i].name,&p[i].score);
	}
	printf("\n成绩单如下:\n");
	for(int i=0;i<n;i++)
	{
		printf("姓名：%s 分数：%lf",p[i].name,p[i].score);
	}
	return 0;
 } 
 
