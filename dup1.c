#include<stdio.h>
#include "array.c"
void main()
{
	int a[100],m,n;
	int *ptr=a;
	printf("Enter the size of the array : ");
	scanf("%d%d",&m,&n);
	//read1(ptr,n);
	read2(ptr,m,n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
	}
}
