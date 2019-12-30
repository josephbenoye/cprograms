#include<stdio.h>
#define larger >

int* comp(int*,int*);

int* comp(int* x,int* y)
{
	if(*x larger *y)
		return x;
	else
		return y;
}
void main()
{
	int a,b,*ptr;
	printf("Enter 2 numbers : ");
	scanf("%d%d",&a,&b);
	ptr = comp(&a,&b);
	printf("The larger number is %d\n",*ptr);
}
