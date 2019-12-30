#include<stdio.h>
void main()
{
	int n,factorial(int x);
	printf("Enter a number : ");
	scanf("%d",&n);
	n = factorial(n);
	printf("Factorial = %d\n",n);
}
int factorial(int x)
{
	int fact=1,i;
	for(i=1;i<=x;i++)
	{
		fact = fact*i;
	}
	return fact;
	
}

