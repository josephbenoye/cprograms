#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	printf("Enter the number of iteration : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\a");
		sleep(0.2);
	}
}
