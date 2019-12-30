#include<stdio.h>
void main()
{
	int n,a=0,b=1,c,i,count=0,sum=0;
	printf("Enter the limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			printf("%d ",i);
			if((i%2)!=0)
			{
				count++;
				sum = sum+i;
			}
		}
		else
		{
			c = a+b;
			a = b;
			b = c;	
			printf("%d ",c);
			if((c%2)!=0)
			{
				count++;
				sum = sum+c;
			}
		}
	}
	printf("\nNo. of odd numbers = %d\nSum of odd numbers = %d\n",count,sum);
}
