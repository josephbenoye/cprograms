#include<stdio.h>
void main()
{
	int a[100],above=0,below=0,equal=0,i,n,total=0;
	float avg;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		total+=a[i];
	}
	avg =(float)total/n;
	printf("Average = %.2f\n",avg);
	for(i=0;i<n;i++)
	{
		if(a[i]>avg)
		{
			above++;
		}
		else if(a[i]==avg)
		{
			equal++;
		}
		else
		{
			below++;
		}
	}
	printf("%d are below average\n%d are above average\n%d is equal to average\n",below,above,equal);
}











	
