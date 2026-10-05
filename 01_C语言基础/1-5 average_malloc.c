#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("请问要输入几个数字？\n");
	scanf("%d",&n);
	
	double *arr=(double*)malloc(n*sizeof(double));
	printf("请输入具体数字:\n");
	double sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&arr[i]);
		sum+=arr[i]; 
	 } 
	 
	double average=sum/n;
	printf("它们的平均值是：%f",average);
	free(arr);
	return 0;
	 
 }
