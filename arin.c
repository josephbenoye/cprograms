#include<stdio.h>
void change(int *,int *,int);
void main()
{
	int a[100],b[100],i,n;
	printf("Enter the size of the arrays : ");
	scanf("%d",&n);
	printf("\nEnter the elements of the first array :-\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the elements of the second array :-\n");
	for(i=0;i<n;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	change(&a[0],&b[0],n);
	printf("\nElements of the first array :-\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	printf("\nElements of the second array :-\n");
	for(i=0;i<n;i++)
	{
		printf("b[%d] = %d\n",i,b[i]);
	}
}
void change(int *x,int *y,int z)
{
	int temp,j;
	for(j=0;j<z;j++)
	{
		temp=*x;
		*x=*y;
		*y=temp;
		*x++;
		*y++;
	}
}
