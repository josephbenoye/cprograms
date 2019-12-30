#include<stdio.h>
void main()
{
	int i,a[100],n,*p;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Entered array :-\n");
	p=&a[0];
	for(i=0;i<n;i++)
	{
		printf("%d\n",*p);
		p++;
	}
}
