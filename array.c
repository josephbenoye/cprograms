#include<stdio.h>
void read1(int *x,int y);
void read1(int *x,int y)
{
	printf("Enter the elememts of the array :-\n");
	int *first_ptr = x;
	for(int i=0;i<y;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",x+i);
	}
}
void read2(int *x,int y,int z);
void read2(int *x,int y,int z)
{
	int *first_ptr = x;
	printf("Enter the elements of the array :-\n");
	for(int i=0;i<y;i++)
	{
		for(int j=0;j<z;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",((x+i)+j));
		}
	}
	for(int i=0;i<y;i++)
	{
		for(int j=0;j<z;j++)
		{
			printf("%d\n",*((x+i)+j));
		}
	}
}	


