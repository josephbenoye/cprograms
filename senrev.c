#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char a[100],temp[100];
	int i,j,b=0,k,len;
	printf("Enter a string : ");
	scanf("%[^\n]s",a);
	len = strlen(a);
	printf("The length of the string  = %d\n",len);
	for(i=len-1;i>=0;i--)
	{
		if(a[i]==' '||i==0)
		{
			if(a[i]==' ')
			{
				for(j=i+1;j<=(i+b);j++)
				{
					printf("%c",a[j]);
				}
			}
			else
			{
				for(j=i;j<=(i+b);j++)
				{
					if(a[j]!='.')
					{
						printf("%c",a[j]);
					}
				}
			}
			printf(" ");
			b=0;
			j=0;
		}	
		else
		{
			b++;
		}
	}
	printf("\b.\n");
}			
