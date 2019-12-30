#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void lower(char x[100]);
void upper(char y[100]);
void main()
{
	char s[100];
	int op;
	printf("Enter a string : ");
	scanf("%[^\n]s",s);
	for(;;)
	{
		printf("1. Lower\n2. Upper\n0. Exit\nEnter the Choice :");
		scanf("%d",&op);
		if(op==1)
			lower(s);
		else if(op==2)
			upper(s);
		else if(op==0)
			exit(0);
		else
			printf("Invalid Input!\n");
	}
}

void lower(char x[100])
{
	int i;
	for(i=0;x[i]!='\0';i++)
	{
		x[i]=tolower(x[i]);
	}
	puts(x);
}
void upper(char y[100])
{
	int j;
	for(j=0;y[j]!='\0';j++)
	{
		y[j]=toupper(y[j]);
	}
	puts(y);
}
