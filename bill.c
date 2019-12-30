#include<stdio.h>
struct bill
{
	int item_no,rate,qty,amount;
	char name[21];
}item[100];
void main()
{
	int i,j,n,total_qty=0,total_price=0;
	printf("Enter the number of items : ");
	scanf("%d",&n);
	printf("\n=============================\n\n");
	for(i=0;i<n;i++)
	{
		printf("Item No %d\n",i+1);
		printf("----------\n");
		printf("Item No : ");
		scanf("%d",&item[i].item_no);
		printf("Item Name : ");
		scanf("%s",item[i].name);
		printf("Enter the price : ");
		scanf("%d",&item[i].rate);
		printf("Quantity : ");
		scanf("%d",&item[i].qty);
		total_qty += item[i].qty;
		item[i].amount = item[i].qty*item[i].rate;
		total_price += item[i].amount;
		printf("----------\n");
	}
	printf("\n\n**************************************** BILL ****************************************\n\n");
	printf("Sl No.\t\tItem_No\t\tItem Name 	Qty\t\tRate\t\tAmount\n");
	printf("--------------------------------------------------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t",i+1);
		printf("%d\t\t",item[i].item_no);
		printf("%s\t\t",item[i].name);
		printf("%d\t\t",item[i].qty);
		printf("%d\t\t",item[i].rate);
		printf("%d\t\t",item[i].amount);
		printf("\n");
	}
	printf("\n--------------------------------------------------------------------------------------\n\n");
	printf("Total Number of items : %d\n",total_qty);
	printf("Total price : Rs %d Only\n",total_price);
	printf("\n--------------------------------------------------------------------------------------\n");
}
