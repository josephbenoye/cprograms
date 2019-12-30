#include<stdio.h>
void main()
{
	int a[100][100],i,j,m,n,count=0,c=0;
	printf("Enter the order of the matrix  : ");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			if(i<=j)
			{
				c++;
			}
		}
	}
	printf("\n");
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
			if(i<=j)
			{
				if(a[i][j]==0)
				{
					count++;
				}
			}
		}
	}
	if(count==c)
	{
		printf("\nThe matrix is upper triangular\n");
	}
	else
	{
		count=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i>=j)
				{
					if(a[i][j]==0)
					{
						count++;
					}
				}
			}
		}
		if(count==c)
		{
			printf("\nThe matrix is lower triangular\n");
		}
		else
		{
			printf("\nThe matrix is neither lower triangluar nor upper triangular\n");
		}
	}
}		
