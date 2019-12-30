#include<stdio.h>
void array(int x,int a[100]);
void main()
{
	int i,b[100],n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&b[i]);
	}
	array(n,b);
}
void array(int x,int a[100])
{
	int i;
	for(i=0;i<x;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}
