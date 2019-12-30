#include<stdio.h>
#include<math.h>
void main()
{
	int a[100][100],i,j,sum=0,m,n;
	float root;
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
			sum+=pow(a[i][j],2);
		}
	}
	root = sqrt(sum);
	printf("Sum = %d\n",sum);
	printf("NORM = %.3f\n",root);
}
