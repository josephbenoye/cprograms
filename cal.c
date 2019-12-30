#include<stdio.h>
#include<string.h>
int leap(int y);
int leap(int y)
{
	if(y%4==0)
		return 1;
	else
		return 0;
}
void main()
{
	char month[15];
	char* mon[] = {"mar","apr","may","jun","jul","aug","sep","oct","nov","dec","jan","feb"};
	char* days[] = {"sun","mon","tue","wed","thu","fri","sat"};
	int year,d,f,m,c,check,i,j,dates,count=0;	
	printf("Enter the month (first 3 letters) : ");
	scanf("%s",month);
	printf("Enter the year : ");
	scanf("%d",&year);
	d = year%100;
	c = year/100;
	for(i=0;i<12;i++)
	{
		if(strcmp(month,mon[i])==0)
		{
			m=i+1;
			break;			
		}
	}
	if(m==11||m==1||m==3||m==5||m==6||m==8||m==10)
	{
		dates = 31;
	}
	else if(m==12)
	{
		if(leap(year)==1)
		{
			dates = 29;
		}
		else
		{
			dates = 28;
		}
	}
	else
	{
		dates = 30;
	}
	f = 1 + (((13*m)-1)/5) + d + (d/4) + (c/4) - (2*c);
	printf("ffff = %d\n",f);
	if(f>=0)
	{
		f = f%7;
	}
	else
	{
		f =((f%7)+7)%7;
	}
	f-=1;
	printf("day = %s\n",days[f]);
	printf("f = %d\n",f);
	printf("-------------------------------------\n");
	printf("Sun     Mon     Tue     Wed     Thu     Fri     Sat\n");
	for(j=1;j<=f;j++)
	{
		printf(" \t");
		count++;
	}
	for(i=1;i<=dates;i++)
	{	
		if(count==7)
		{
			printf("\n");
			count=0;
		}
		printf("%d\t",i);
		count++;	
	}
	printf("\n");








	
	





















}
