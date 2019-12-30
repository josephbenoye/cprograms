#include<stdio.h>
void main()
{
	int a[100],i,n,j,temp,sorted=0;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Sorted array :-\n");
	for(i=0;i<n;i++)
	{
		sorted=1;
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				sorted=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
