#include<stdio.h>
#include<math.h>
void main()
{
	int i,j=0,n,a[100],b[100][3];
	printf("Enter the number of elements of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
			b[i][j]=a[i]+a[i];
			b[i][j+1]=pow(a[i],2);
			b[i][j+2]=pow(a[i],3);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}

	
