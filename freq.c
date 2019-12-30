#include<stdio.h>
void main()
{
	char a[100],temp[100];
	int i,j,count=1,n;
	printf("Enter a string : ");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		n++;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				continue;
			}
			else
			{
				printf("%c ",a[j]);
			}
		}
	}

}
