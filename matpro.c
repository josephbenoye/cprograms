#include<stdio.h>
void main()
{
	int a[100][100],b[100][100],c[100][100],i,j,k,sum=0,pro,m,n,p,q;
	/*collecting the values of two matrices*/
	printf("Enter the order of the  first matrix : ");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);			
		}
	}
	printf("Enter the order of the second matrix : ");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		for(i=0;n!=p;i++)
		{
			printf("Error! The number of columns of the first matrix should be equal to the number of rows of the second matrix \n");
			printf("Enter the order of the second matrix : ");
			scanf("%d%d",&p,&q);
		}
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);			
		}
	}
/*Collecting finished*/
/*-------------------*/
/*printing the two matrices*/
	printf("The first matrix :-\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);			
		}
		printf("\n");
	}
	printf("The second matrix :-\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ",b[i][j]);			
		}
		printf("\n");
	}
/*-------------*/
/*calculating the product*/
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<p;k++)
			{
				pro = a[i][k]*b[k][j];
				sum+=pro;
			}
			c[i][j]=sum;
			sum=0;
		}
	}
/*printing the product*/
	printf("The product of the two matrices :-\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);			
		}
		printf("\n");
	}
}
