#include<stdio.h>
void main()
{
	int a[100][100],temp,i,j,sorted=0,m,n;
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
/*sorting by bubble sort algorithm*/
	i=0;
	while(i<(n-1)&&sorted!=1)
	{
		i++;
		sorted=1;
		for(j=0;j<(n-i);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				sorted=0;
			}
		}
	}
	printf("Sorted matrix :-\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
