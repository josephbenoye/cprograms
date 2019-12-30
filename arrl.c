#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,m,n,*ptr;
	printf("Size 1 : ");
	scanf("%d",&m);
	ptr = (int*)malloc(m*sizeof(int));
	for(i=0;i<m;i++)
	{
		printf("[%d] = %p\n",i,ptr+i);
	}
	printf("Size 2 : ");
	scanf("%d",&n);
	ptr = realloc(ptr,n);
	for(i=0;i<n;i++)
	{
		printf("[%d] = %p\n",i,ptr+i);
	}
}
