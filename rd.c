#include<stdio.h>

struct marks
{
	int total,roll_no,mark[5];
	char name[25];
}stud[100];

void main()
{
	int i,j,n;
	printf("Enter the number of students : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		printf("\n--------------------------\n");
		printf("\tStudent %d\n",i+1);
		printf("--------------------------\n");
		printf("Roll No. : ");
		scanf("%d",&stud[i].roll_no);
		printf("Name : ");
		scanf("%s",stud[i].name);
		printf("\n\tMarks\n\t\b-------\n");
		for(j=0;j<5;j++)
		{
			printf("marks %d : ",j+1);
			scanf("%d",&stud[i].mark[j]);
			stud[i].total = stud[i].mark[j];
		}
	}
	printf("\n******************** MARKLIST ********************\n");
	printf("------------------------------------------------\n");
	printf("| Roll No    |      Name       |   Total Marks |\n");
	printf("------------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("    %d              ",stud[i].roll_no);
		printf("%s                 ",stud[i].name);
		printf("%d\n",stud[i].total);
	}
}
