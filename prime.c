#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("Enter an number : ");
	scanf("%d",&n);
	for(i=1;i<=(n/2);i++)
	{
		if((n%i)==0)
		{
			count++;
		}
	}
	if(count<2)
	{
		if(n!=1)
		{
			printf("%d is a prime number\n",n);
		}
		else
		{
			printf("1 is neither prime nor a consecutive number\n");
		}
	}
	else
	{
		printf("The factors of %d :- ",n);
		for(i=1;i<=(n/2);i++)
		{
			if((n%i)==0)
			{
				if(i>1)
				{
					printf("%d ",i);
				}			
			}
		}
	}
	printf("\n");
}
    
