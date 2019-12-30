#include<stdio.h>
#include "array.c"
#include<stdio.h>
#include<stdlib.h>

int n,a[100];

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
