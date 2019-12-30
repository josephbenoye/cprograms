#include<stdio.h>
#include<math.h>
int distance(int x1, int y1,int x2,int y2);
int distance(int x1, int y1,int x2,int y2)
{
	int dist;
	dist = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	return dist;
}
void main()
{
	int a1,a2,a3,a4,b1,b2,b3,b4,dist12,dist23,dist34,dist14;
	printf("Enter the value (x1,y1) : ");
	scanf("%d%d",&a1,&b1);
	printf("Enter the value (x2,y2) : ");
	scanf("%d%d",&a2,&b2);
	printf("Enter the value (x3,y3) : ");
	scanf("%d%d",&a3,&b3);
	printf("Enter the value (x4,y4) : ");
	scanf("%d%d",&a4,&b4);
	dist12 = distance(a1,b1,a2,b2);
	dist23 = distance(a2,b2,a3,b3);
	dist34 = distance(a3,b3,a4,b4);
	dist14 = distance(a1,b1,a4,b4);
	if(dist12==dist23&&dist23==dist34&&dist34==dist14)
	{
		printf("The quadrilateral is a square\n");
	}
	else
	{
		printf("The quadrilateral is a rectangle\n");
	}
}
	

