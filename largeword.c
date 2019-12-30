#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,j=0,countl=0,countc=0,len=0,c=0;
	char a[100],longest[100],*ptr,mat[100][100];
	ptr = a;
	printf("Enter a sentence : ");
	scanf("%[^\n]s",a);
	len = strlen(a);
	for(;*ptr!='\0';ptr++)
	{
		if(*ptr==' ')
		{
			i++;
			j=0;
			continue;
		}
		else
		{
			mat[i][j] = *ptr;
			j++; 
		}
	}
	len = i+1;
	for(i=0;i<len;i++)
	{
		for(j=0;mat[i][j]!='\0';j++)
		{
			countc++;
		}
		if(countc>countl)
		{
			countl = countc;
			strcpy(longest,mat[i]);
		}
		else
		{
			if(countc==countl)
			{
				c++;
			}
		}
		countc=0;
	}
	c=c+1;
	if(c==len)
	{
		printf("All the words are of same length\n");	
	}
	else
	{
		printf("The longest word : %s\n",longest);
	}
}
