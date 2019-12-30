#include<stdio.h>
int ascii(int x);
void main()
{
	char text[100],encrypt[100];
	int i,n;
	printf("Enter the text to be encrypted : ");
	scanf("%[^\n]s",text);
	for(i=0;text[i]!='\0';i++)
	{
		encrypt[i] = ascii(text[i]);
	}
	printf("The encrypted text :-\n");
	for(i=0;encrypt[i]!=0;i++)
	{
		printf("%c",encrypt[i]);
	}
	printf("\n");
}
int ascii(int x)
{
	x=x-2;
	return x;
}

		
