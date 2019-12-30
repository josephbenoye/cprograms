#include<stdio.h>
#define PI 3.14152
void volume(int x, int y);
void tsa(int a, int b);
void volume(int x,int y)
{
	int vol;
	vol = PI*x*x*y;
	printf("Volume of the cylinder = %d\n",vol);
}
void tsa(int a, int b)
{
	int tsa;
	tsa = 2*PI*a*(a+b);
	printf("Total surface area of the cylinder = %d\n",tsa);
}
void main()
{
	int radius,height;
	printf("Enter the radius of the cylinder : ");
	scanf("%d",&radius);
	printf("Enter the height of the cylinder : ");
	scanf("%d",&height);
	volume(radius,height);
	tsa(radius,height);
} 
