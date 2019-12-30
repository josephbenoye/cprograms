#include<stdio.h>
void main()
{	
	int fibo(int x);
	int n;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(int i=1;i<=5;i++)
		printf("fibo = %d",fibo(i));
}
int fibo( int x)
{
	if(x==1||x==2)
	{
		return 1;
	}
	else
	{
		return (fibo(x-1)+fibo(x-2));
	}
}
