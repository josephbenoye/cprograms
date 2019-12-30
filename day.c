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
	char mon[12][3] = {"mar","apr","may","jun","jul","aug","sep","oct","nov","dec","jan","feb"};
	char days[7][3] = {"mon","tue","wed","thu","fri","sat","sun"};
	int year,d,f,m,c,check,i,j,k;
    printf("Enter the day : ");
    scanf("%d",&k);	
	printf("Enter the month (first 3 letters) : ");
	scanf("%s",month);
	printf("Enter the year : ");
	scanf("%d",&year);
	d = year%100;
	c = year/100;
	if(strcmp(month,"jan")==0)
		m = 11;
	else if (strcmp(month,"feb")==0)
		m = 12 ;
	else if (strcmp(month,"mar")==0)
		m = 1 ;
	else if (strcmp(month,"apr")==0)
		m =  2;
	else if (strcmp(month,"may")==0)
		m = 3 ;
	else if (strcmp(month,"jun")==0)
		m =  4;
	else if (strcmp(month,"jul")==0)
		m =  5;
	else if (strcmp(month,"aug")==0)
		m = 6 ;
	else if (strcmp(month,"sep")==0)
		m = 7 ;
	else if (strcmp(month,"oct")==0)
		m =  8;
	else if (strcmp(month,"nov")==0)
		m =  9;
	else if (strcmp(month,"dec")==0)
		m =  10;		
	f = k + (((13*m)-1)/5) + d + (d/4) + (c/4) -(2*c);
	if(f>=0)
	{
		f = f%7;
	}
	else
	{
		f =((f%7)+7)%7;
	}
	f--;
	if(f==0)
		printf("sunday");
	else if(f==1)
		printf("monday");
	else if(f==2)
		printf("tuesday");
	else if(f==3)
		printf("wednesday");
	else if(f==4)
		printf("thursday");
	else if(f==5)
		printf("friday");
	else if(f==6)
		printf("saturday");
		
	printf("\n");
	
}




