#include<stdio.h>
int swap(int *m,int *n)
{
	int change=*m;
	*m=*n;
	*n=change;
	return 0; 	
}

int main()
{   
    printf("请输入两个数字："); 
	int a,b;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("交换后：%d %d",a,b);
	return 0;
 } 
