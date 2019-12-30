#include<stdio.h>
void main()
{
	int a[2][25],n,i,j,temp;
	printf("Enter the number of columns : ");
	scanf("%d",&n);
	for(i=0;i<2;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The entered matrix :-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Sorted matrix :-\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			temp = a[j][i];
			a[j][i] = a[j+1][i];
			a[j+1][i] = temp;
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
