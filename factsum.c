#include<stdio.h>
int sum(int x);
int fact(int y);

void main()
{
	int n;	
	printf("Enter a number : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%d!+",i);
	}
	printf("\b = %d\n",sum(n));
}

int sum(int x)
{
	int s=0,i=1;
	fact(x);
	if(i<=x)
	{
		
		s = s+sum(i+1);
				printf("ssssssss=%d\n",s);
		return s;
	}
	else
	{

		return x;
	}
}

int fact(int y)
{
	if(y>1)
	{
		y = y+fact(y-1);
		return y;
	}
	else
	{
		return y;
	}
}




























