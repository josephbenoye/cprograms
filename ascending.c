#include<stdio.h>
void main()
{
	int a[100],temp,i,j,sorted=0,n;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
/*sorting by bubble sort algorithm*/
	i=0;
	while(i<(n-1)&&sorted!=1)
	{
		i++;
		sorted=1;
		for(j=0;j<(n-i);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				sorted=0;
			}
		}
	}
	printf("Sorted list :-\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}
