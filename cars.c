#include<stdio.h>
struct {
	int year,millege,cc;
	char brand[15],name[15];
}car[10];
void main()
{
	int n,i,j;
	printf("No. of items : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("
