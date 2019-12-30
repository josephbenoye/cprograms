#include<stdio.h>
int fibo();
void main()
{
	int i,n;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			printf("%d ",i);
		}
		else
		{
			printf("%d ",fibo());
		}
	}
	printf("\n");
}
int fibo()
{
	static int a=0,b=1,c;
	c = a+b;
	a=b;
	b=c;
	return c;
}
