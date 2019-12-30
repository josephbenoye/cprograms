#include<stdio.h>
struct person
{
	int height,weight,age;
	char name[20];
}p;
void main()
{
	struct person *ptr = &p;
	printf("Enter the name of the person : ");
	scanf("%[^\n]s",ptr->name);
	printf("Enter the age of the person : ");
	scanf("%d",&ptr->age);
	printf("The name of the person = %s\n",ptr->name);
	printf("The age of the person = %d\n",ptr->age);
}
