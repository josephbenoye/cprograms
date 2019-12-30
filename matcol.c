#include<stdio.h>
void main()
{
	int a[100][100],sum[100],i,j,m,n,s=0,k;
	printf("Enter the order of the first matrix : ");
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
			s+=a[j][i];
		}
		sum[i]=s;
		s=0;
	}
	for(i=0;i<m;i++)
	{
		k=i+1;
		printf("sum of row %d = %d\n",k,sum[i]);
	}
}
