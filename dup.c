#include<stdio.h>
void main()
{
	int a[100],b[100],n,i,j,count=0,c=0;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				a[j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			continue;
		}
		else
		{
			b[count]=a[i];
			count++;
		}
	}

	for(i=0;i<count;i++)
	{
		printf("%d\n",b[i]);
	}
}
