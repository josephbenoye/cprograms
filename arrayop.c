#include<stdio.h>
#include<stdlib.h>

int n,a[100];

void read();
void print();
void sum();
void search();
void div7();

void read()
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void print()
{
	int i;
	printf("Entered Array :-\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}
void sum()
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{	
		sum+=a[i];
	}
	printf("The sum of elements = %d\n",sum);
}
void search()
{
	int i,j,count=0,k;
	printf("Enter an element to search : ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(k==a[i])
		{
			count++;
			printf("\n%d is present at the position a[%d]\n",k,i);
		}
	}
	if(count==0)
	{
		printf("%d is not present in the array\n",k);
	}
}
void div7()
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if((a[i]%7)==0)
		{
			printf("%d ",a[i]);
			flag++;
		}
	}
	printf("The number of elements that ar divisible by 7 = %d\n",flag);
	if(flag==0)
	{
		printf("No elements are divisible by 7\n");
	}
}

void main()
{
	int opt;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the array :-\n");
	read();
	printf("\n-----------------------------\n\n");
	for(;;)
	{
		printf("***** MENU *****\n");
		printf("1. Print the array\n");
		printf("2. Sum of the elements\n");
		printf("3. Search an element\n");
		printf("4. Elements divisible by 7\n");
		printf("5. Exit\n\n");
		printf("Enter an option : ");
		scanf("%d",&opt);
		printf("\n");
		switch(opt)
		{
			case 1:
					print();
					break;
			case 2:
					sum();
					break;
			case 3:
					search();
					break;
			case 4:
					div7();
					break;
			case 5:
					printf("Exiting...............!\n");
					exit(0);
			default:
					printf("Invalid input!\n");

		}
		printf("\n");
	}
}		
