#include<stdio.h>

void main()
{
	int m,n,i,c=0,d=0,max=1,a[100],b[100];
	printf("Enter 2 numbers : ");
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
	{
		if((m%i)==0)
		{
			a[c]=i;
			c++;
		}
	}
	for(i=1;i<=n;i++)
	{
		if((n%i)==0)
		{
			b[d]=i;
			d++;
		}
	}
	for(i=0;i<c;i++)
	{
		if(a[i]==b[i])
		{
			printf("Common factors = %d\n",a[i]);
			if(a[i]>max)
			{
				max=a[i];
			}
		}
	}
	
	printf("HCF =%d\n",max);
}
