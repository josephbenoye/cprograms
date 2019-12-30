#include<stdio.h>

int power(int x,int y);

int power(int x,int y)
{
	int i,pro=1;
	for(i=1;i<=y;i++)
	{
		pro*=x;
	}
	return pro;
}

void main()
{
	int a,b;
	printf("Enter the value of x : ");
	scanf("%d",&a);
	printf("Enter the power : ");
	scanf("%d",&b);
	printf("%d raised to %d  = %d\n",a,b,power(a,b));
}
