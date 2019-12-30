#include<stdio.h>
void main()
{
	int i,x[8]={-1,0,-3,0,-5,0,-7,0};
	for(i=0;i<8;i++)
	{
		printf("%d ",x[i]);
	}
	printf("\n");
	for(i=0;i<8;i++)
	{
		if(x[i]==0)
		{
			x[i]=(-i)-1;
		}
		printf("%d ",x[i]);
	}
	printf("\n");	
}
