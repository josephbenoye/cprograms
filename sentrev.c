#include<stdio.h>
void main()
{
	char text[100],temp[100];
	int i,j,count=0,c=0,d=0,k=0;
	printf("Enter some text : ");	
	scanf("%[^\n]s",text);
	for(i=0;text[i]!='\0';i++)
	{
		d++;
	}
	for(i=d-1;i>=0;i--)
	{
		c++;
		if(text[i]==' ')
		{
			count++;
		}
		if(count==1)
		{
			for(j=c+1;j<d;j++)
			{
				temp[k] = text[j];
				k++;
			}
			count=0;
		}
	}












	puts(temp);
}
	
