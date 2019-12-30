#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	int i,j,count=0;
	printf("Enter first string : ");
	scanf("%s",a);
	printf("Enter the second string : ");
	scanf("%s",b);
	if(strcmp(a,b)==0)
	{
		printf("The strings are identical\n");
	}
	else
	{
		printf("\nThe similar characters found in both the strings :-\n\n");
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]==b[i])
			{
				printf("%c ",a[i]);
			}
		}
		printf("\n\n");
				for(i=0;a[i]!='\0';i++)
		{
			if(a[i]!=b[i])
			{
				count++;
			}
		}
		printf("Both the strings are different at %d positions\n",count);
	}
}
