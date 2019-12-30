#include<stdio.h>
void main()
{
	char a[100],b[100],*ptr;
	int i,j,count=0;
	printf("Enter a string : ");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		ptr = &a[i];
		count++;
	}
	count=count-1;
	j=0;
	while(count>=0)
	{
		b[j]=*ptr;
		j++;
		ptr--;
		count--;
	}
	puts(b);
}

