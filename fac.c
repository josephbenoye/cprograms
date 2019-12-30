#include<stdio.h>
void main()
{
	int fact(int x);
	int n,f;
	printf("Enter a number  : ");
	scanf("%d",&n);
	f = fact(n);
	printf("factorial = %d\n",f);
}
int fact(int x)
{
	if(x==1)
		return x;
	else
		return x*fact(x-1);
}
