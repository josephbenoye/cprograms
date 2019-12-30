#include<stdio.h>
void main()
{
	int i,x,y,pro=1;
	printf("Enter x,y : ");
	scanf("%d%d",&x,&y);
	for(i=1;i<=y;i++)
	{
		pro*=x;
	}
	printf("power = %d\n",pro);
}
