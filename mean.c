#include<stdio.h>
#include<stdlib.h>
int sum(int x[100],int b);
void mean(int s,int no);
void main()
{
	int a[100],i,n,op;
	printf("Enter size of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	mean(sum(a,n),n);
}
int sum(int x[100],int b)
{
	int sums=0;
	for(int i=0;i<b;i++)
	{
		sums+=x[i];
	}
	return sums;
}
void mean(int s,int no)
{
	int m;
	m=s/no;
	printf("Arithmetic mean = %d\n",m);
}






























