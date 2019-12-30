#include<stdio.h>
void main()
{
	char a[100],b[100];
	char *px=a,*py=b;
	int diff;
	printf("Enter the first string : ");
	scanf("%s",a);
	printf("Enter the second string : ");
	scanf("%s",b);
	for(;*px!='\0';px++&&*py++)
	{
		if(*px!=*py)
		{
			diff = *px-*py;
			break;
		}
		else
		{
			continue;
		}
	}
	printf("strcmp of %s and %s = %d\n",a,b,diff);
}
