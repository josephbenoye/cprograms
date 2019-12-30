#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,sorted=0,i,j,*temp,*ptr,tem=0;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	ptr = (int *)calloc(n,sizeof(int));
	temp = ptr;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",ptr+i);
	}
	ptr = temp;
	printf("Entered array :-\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
	ptr = temp;
	for(i=0;i<n;i++)
	{	
		sorted=1;
		for(j=0;j<n;j++)
		{
			if((*(ptr+j))>(*((ptr+j)+1)))
			{
				tem = *(ptr+j);
				*(ptr+j) = *((ptr+j)+1);
				*((ptr+j)+1) = tem;
				sorted=0;
			}
		}
	}
	ptr = temp;
	printf("Sorted array :-\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
}
