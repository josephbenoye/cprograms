#include<stdio.h>
#include<math.h>
int power(int c);
void main()
{
	int n,x,sum=0;
	printf("Enter the value of x and n : ");
	scanf("%d%d",&x,&n);
	for(int i=1;i<=n;i++)
	{
		sum+=power(x);
	}
	printf("x1+x2+x3+.....................xn = %d\n",sum);
}
int power(int c)
{
	static int i=0;
	i++;
	return pow(c,i);
}
