#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char url[100],sys[100]="firefox --screenshot --new-window ";
	printf("Enter the url : ");
	scanf("%[^\n]s",url);
	strcat(sys,url);
	system(sys);
}
