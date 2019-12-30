#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int leap(int y);
int leap(int y)
{
	if(y%4==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	char date[8],split[3][4];
	int i=0,j=0,k=0,day,month,year,sum=0,check;
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("Enter the date in ( dd/mm/yyyy ) or ( dd-mm-yyyy) format : ");
	scanf("%s",date);
	while(date[i]!='\0')
	{
		if(date[i]!='/'||date[i]!='-')
		{
			split[j][k]=date[i];
			k++;
		}
		else
		{
			j++;
			k=0;
		}		
		i++;
	}
	day=atoi(split[0]);
	month=atoi(split[1]);
	year=atoi(split[2]);
	check=leap(year);
	if(check==1)
	{
		days[1]=29;
	}
	for(i=0;i<(month-1);i++)
	{
		sum+=days[i];
	}
	sum+=day;
	printf("No of days from 01/01/%d to %d/%d/%d = %d\n",year,day,month,year,sum);
}
	
