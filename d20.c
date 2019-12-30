/*decimal to octal*/
#include<stdio.h>
#include<math.h>
void main()
{
	int dec,temp[100],i=0,r,d,count=0,sum=0,c;
	printf("Enter the decimal number : ");
	scanf("%d",&dec);
	d = dec;
	while(dec!=0)
	{
		r = dec%2;
		temp[i] = r;
		dec/=2;
		i++;
		count++;
	}
	for(i=0;i<count;i++)
	{
		temp[i] = temp[i]*pow(8,i);
		sum+=temp[i];
	}
	printf("Octal = %d\n",sum);
}
