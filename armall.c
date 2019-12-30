#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,*ptr,*temp;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	ptr = (int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not available\n");
	}
	else
	{
		temp = ptr;
		for(i=0;i<n;i++)
		{
			printf("a[%d] = ",i);
			scanf("%d",ptr+i);
		}
		for(i=0;i<n;i++)
		{
			printf("a[%d] = %d\n",i,*(temp+i));
		}
	}
}
	
