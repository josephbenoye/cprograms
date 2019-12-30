#include<stdio.h>
void main()
{
	int a;
	int *b = &a;
	int **c=&b;
	printf("Enter a number (a): ");
	scanf("%d",&a);
	printf("Pointer to a : %p\n",*c);
}
