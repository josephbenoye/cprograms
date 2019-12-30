/*binary to decimal*/
#include<stdio.h>
#include<math.h>
void main()
{
	int bin,i=0,dec=0,r,b,temp;
	printf("Enter the binary : ");
	scanf("%d",&bin);
	printf("------------------\n");
	b = bin;
	while(bin!=0)
	{
		r = bin%10;
		if(r>1)
		{
			printf("Enter a valid binary number\n");
			break;
		}
		temp = r*pow(2,i);
		dec+=temp;		
		bin/=10;
		i++;
	}
	printf("Binary - Decimal\n");
	printf("-----------------\n");
	printf("%d    =   %d\n\n",b,dec);
}
