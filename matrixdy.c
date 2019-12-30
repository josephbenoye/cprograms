#include<stdio.h>
#include<stdlib.h>
void main()
{
	int m,n,i,j=0,x,y;
	int *r,*c,*temp1,*temp2;
	temp1 = r;
	temp2 = c;
	printf("Enter the order of the first matrix : ");
	scanf("%d%d",&m,&n);
	r = (int *)calloc((m*n),sizeof(int));
	c = (int *)calloc((x*y),sizeof(int));
	for(i=0;i<(m*n);i++)
	{
		printf("element %d : ",i+1);
		scanf("%d",r+i);
	}
	printf("m*n = %d\n",m*n);
	i=1;
	while(i<=(m*n))
	{
		printf("%d ",*r+j);
		j++;
		if(i==n)
		{
			printf("\n");
		}
		i++;
	}
	printf("\n");
}
