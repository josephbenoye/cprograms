#include<stdio.h>
int avg();
void main()
{
	int average=0,n;
	printf("Enter the number of values : ");
	scanf("%d",&n);
	average = avg(n);
	printf("Average = %d\n",average);
}
int avg(int N)
{
	int i=0,val[100],total=0,a;
	for(i=0;i<N;i++)
	{
		printf("value %d = ",i+1);
		scanf("%d",&val[i]);
		total+=val[i];
	}
	printf("The values are : ");
	for(i=0;i<N;i++)
	{
		printf("%d ",val[i]);
	}
	printf("\n");
	a = total/N;
	return a;
}
