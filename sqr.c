#include<stdio.h>
void main()
{
	int a[100],sum=0,sqr,i,j,n,count=0;
	printf("Enter the number of values : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i+1);
		scanf("%d",&a[i]);
		if(a[i]<1)
		{
			continue;
		}
		else if(a[i]==999)
		{	
			break;
		}		
		else
		{		
			sum+=a[i];
			sqr+=a[i]*a[i];
			if((a[i]%5)==0)
			{
				count++;
			}
		}
	}
	printf("Sum = %d\nSum of squares = %d\nNo. of values divisble by 5 = %d\n",sum,sqr,count);
}
	
	
