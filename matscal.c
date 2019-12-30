#include<stdio.h>
void main()
{
	int a[100][100],i,j,m,n,k,countk=0,counte=0;
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
	printf("Enter a scalar constant : ");
	scanf("%d",&k);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==k)
			{
				countk++;
			}
			if(a[i][j]%2==0)
			{
				counte++;
			}
		}
	}
	if(countk==0)
	{
		printf("Number of even numbers in the array : %d\n",counte);
	}
	else
	{
		printf("Number of times %d is present in the array : %d\n",k,countk);
	}
}	
