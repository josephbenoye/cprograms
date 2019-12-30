#include<stdio.h>
struct marklist
{
	char name[25],grade;
	int roll_no,mark[5],total,avg,per;
}stud[100];
int avgf(int sum);
int perf(int tot);
char gradef(int percent);
void print(struct marklist temp[100],int no);
void main()
{
	struct marklist *ptr = stud;
	int i,j,n;
	printf("Enter the number of students : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		(ptr+i)->total=0;
		printf("Student %d\n",i+1);
		printf("Name : ");
		scanf("%s",(ptr+i)->name);
		printf("Roll No : ");
		scanf("%d",&(ptr+i)->roll_no);
		for(j=0;j<5;j++)
		{
			printf("Mark %d : ",j+1);
			scanf("%d",&(ptr+i)->mark[j]);
			(ptr+i)->total+=(ptr+i)->mark[j];
		}
		(ptr+i)->avg = avgf((ptr+i)->total);
		(ptr+i)->per = perf((ptr+i)->total);
		(ptr+i)->grade = gradef((ptr+i)->per);
	}
	print(stud,n);
}
int avgf(int sum)
{
	int avg1;
	avg1 = sum/5;
	return avg1;
}
int perf(int tot)
{
	int percentage;
	percentage = (tot*100)/500;
	return percentage;
}
char gradef(int percent)
{
	char g;
	if(percent>=90)
		g = 'A';
	else if(percent>=80)
		g = 'B';
	else if(percent>=70)
		g = 'C';
	else if(percent>=60)
		g = 'D';
	else
		g = 'E';
}
void print(struct marklist temp[100],int no)
{
	printf("\n----------------------\nStudent data\n----------------------\n\n");
	for(int i=0;i<no;i++)
	{
		printf("Student %d",i+1);
		printf("Roll no = %d\n",temp[i].roll_no);
		printf("Name = %s\n",temp[i].name);
		printf("\n\n----------------------\n");
		printf("Total  = %d\nAverage = %d\nPercentage = %d\n",temp[i].total,temp[i].avg,temp[i].per);
		printf("----------------------\n");
	}
	printf("\n");
}
	
	
