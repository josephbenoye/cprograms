#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp = fopen("2d.c","r");
	char text[100];
	if(fp==NULL)
	{
		printf("error\n");
	}
	while(!feof(fp))
	{
		fgets(text,100,fp);
		printf("%s",text);
	}
	system("clear");

}
