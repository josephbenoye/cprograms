#include<stdio.h>

struct marklist
{
	int roll_no,mark[5];
	char name[21];
}stud[100];

void main()
{
	int total=0,i,j,k,n;
	float avg,percent;
	printf("\n**********Marklist**********\n");
	printf("\nEnter the number of students : ");
	scanf("%d",&n);
	printf("\nEnter the data of each student\n");
	printf("----------------------\n\n");
	for(i=0;i<n;i++)
	{
		printf("Roll no. : ");
		scanf("%d",&stud[i].roll_no);
		printf("Name     : ");
		scanf("%s",stud[i].name);
		printf("----------------------\n");
		for(j=0;j<5;j++)
		{
			k=j;
			printf("mark %d = ",k+1);
			scanf("%d",&stud[i].mark[j]);
		}
		printf("\n----------------------\n");
	}
/*printing the data*/
	printf("\n----------------------\nStudent data\n----------------------\n\n");
	for(i=0;i<n;i++)
	{
		printf("Roll no = %d\n",stud[i].roll_no);
		printf("Name = %s\n",stud[i].name);
		for(j=0;j<5;j++)
		{
			k=j;
			printf("Mark %d = %d\n",k+1,stud[i].mark[j]);
		}
		for(j=0;j<5;j++)
		{
			total+=stud[i].mark[j];
		}
		printf("\n\n----------------------\n");
		avg=(float)total/5;
		percent=(float)(total*100)/500;
		printf("Total  = %d\nAverage = %f\nPercentage = %f\n",total,avg,percent);
		if(percent>=90)
			printf("A+ grade\n");
		else if(percent>=80)
			printf("A grade\n");
		else if(percent>=70)
			printf("B+ grade\n");
		else if(percent>=60)
			printf("B grade\n");
		else if(percent>=50)
			printf("C+ grade\n");
		else if(percent>=40)
			printf("C grade\n");
		else if(percent>=30)
			printf("D+ grade\n");
		else 
			printf("D grade , FAILED!\n");
		printf("----------------------\n");

		total=0;
	}
	printf("\n");
}		
