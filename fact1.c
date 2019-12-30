#include<stdio.h>
int fact(int x);

void main()
{
	int n,f;
	printf("Enter a number : ");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial = %d\n",f);
}

int fact(int x)
{
	if(x>1)
	{
		x = x*fact(x-1);
		return x;
	}
	else
	{
		return x;
	}
}
	
