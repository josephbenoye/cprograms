#include<stdio.h>
void main()
{
	int a[100],b[100],n,i,j,c=0,count;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<c;j++)
		{
			if(a[i]==b[j])
			{
				count++;
			}
		}
		if(count==0)
		{
			b[c]=a[i];
			c++;
		}
	}
	printf("New array without duplicate elements :-\n");
	for(i=0;i<c;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
}		
