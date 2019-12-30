#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("Enter the number of lines to print : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
			if(j==i)
			{
				for(k=j-1;k>=1;k--)
				{
					printf("%d ",k);
				}
			}
		}
		printf("\n");
	}
}	
