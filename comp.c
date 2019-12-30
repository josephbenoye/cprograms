#include<stdio.h>

int add(int m,int n);

int pro(int i,int j);

void main()
{
	int opt,x,y,a,b;
	printf("Enter the values of x and y in (x+iy) : ");
	scanf("%d%d",&x,&y);
	printf("Enter the values of a and b in (a+ib) : ");
	scanf("%d%d",&a,&b);
	printf("1. Add\n2. Product\nEnter your choice : ");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
				printf("The sum = %d + %di\n",add(x,a),add(y,b));
				break;
		case 2:
				printf("The product = %d + %di\n",pro(x,a),pro(y,b));
				break;
		default:
				printf("Invalid input!\n");
	}
}	



int add(int m,int n)
{
	int sum;
	sum = m+n;
	return sum;
}


	
int pro(int i,int j)
{
	int mult;
	mult = i+j;
	return mult;
}

