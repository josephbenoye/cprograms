#include<stdio.h>
int count();
void main()
{
	int i,n,c=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		c=count();
	}
	printf("No of times the function is called = %d\n",c);
}
int count()
{
	static int flag=0;
	flag++;
	printf("\tflag = %d\n",flag);
	return flag;
}
