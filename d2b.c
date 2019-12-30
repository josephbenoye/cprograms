/*decimal to binary*/
#include<stdio.h>
void main()
{
	int dec,temp[100],i=0,r,d,count=0,bin[100],c;
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
	c = count;
	count--;
	i = 0;
	while(count>=0)
	{
		bin[count] = temp[i];
		count--;
		i++;
	}
	printf("Decimal     -       Binary\n");
	printf("---------------------------\n");
	printf("%4d\t\t",d);
	for(i=0;i<c;i++)
	{
		printf("%d ",bin[i]);
	}
	printf("\n---------------------------\n");
}
