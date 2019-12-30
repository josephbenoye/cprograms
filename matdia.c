#include<stdio.h>
void main()
{
	int a[100][100],i,j,m,n,sum=0;
	printf("Enter the order of the matrix : ");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);			
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);			
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
			}		
		}
	}
	printf("The sum of the main diagonal elements = %d\n",sum);
}
