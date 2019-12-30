#include<stdio.h>
void main()
{
	int m,n,i,j,a[100][100];
	int *ptr;
	ptr=&a[0][0];
	printf("Enter the size of the matrix : ");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",*(a+i)+j);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]= %d\n",i,j,*(*(a+i)+j));
		}

	}
}
