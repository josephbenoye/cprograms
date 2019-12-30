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
	int s=0;
	for(int i=1;i<=x;i++)
	{
		s += fact(i);
	}
	return s;
}

int fact(int y)
{
	int i,f=1;
	for(i=1;i<=y;i++)
	{
		f *=i;
	}
	return f;
}
