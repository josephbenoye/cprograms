#include<stdio.h>
void main()
{
	int sq[100],i=0,count=0,n,sqr,r,sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("n = %d\n",n);
	while(n!=0)
	{
		sum*=10;
		r = n%10;
		sum+=r;
		n/=10;
		count++;
	}
	r=0;
	while(sum!=0)
	{
		r=sum%10;

		sq[i]=r*r;
		sum/=10;
		i++;
	}
	for(i=0;i<count;i++)
	{
		printf("%d",sq[i]);
	}
	printf("\n");
}
