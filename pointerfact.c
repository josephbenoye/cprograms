#include<stdio.h>
int fact(int *);
void main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("The factorial of %d = %d\n",n,fact(&n));
}
int fact(int *x)
{
	int i,factorial=1;
	for(i=1;i<=*x;i++)
	{
		factorial*=i;
	}
	return factorial;
}
