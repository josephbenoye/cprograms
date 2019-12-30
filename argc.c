#include<stdio.h>
void main(int argc,char *argv[100])
{
	printf("No of arguements :-%d\n",argc);
	for(int i=1;i<argc;i++)
	{
		printf("%s\n",argv[i]);
	}
}
