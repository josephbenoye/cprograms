#include<stdio.h>
void main()
{
	int i,j,sorted=0,n,temp,a[100],med_pos;
	float median;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sorted = 1;
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				sorted = 0;
			}
		}
	}
	printf("The sorted array :- ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	med_pos = (((n+1)/2)-1);
	if((n%2)!=0)
	{
		median = a[med_pos];
		printf("The median = %.0f\n",median);
	}
	else
	{
		median = (((float)a[med_pos]+a[med_pos+1])/2);
		printf("The median = %.1f\n",median);
	}
}
	
