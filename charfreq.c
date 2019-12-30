#include<stdio.h>
#include<string.h>
void main()
{
	char word[100],x[100],temp[100];
	int i,j,count=0,c=0;
	printf("Enter a word : ");
	scanf("%[^\n]s",word);
	strcpy(x,word);
	for(i=0;word[i]!='\0';i++)
	{
		count++;	
	}
	printf("Total number of letters : %d\n",count);
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(word[j]==word[i])
			{
				word[j]='0';
			}
		}
	}
	for(i=0;i<count;i++)
	{
		if(word[i]=='0'||word[i]==' ')
		{
			continue;
		}
		else
		{
			temp[c]=word[i];
			c++;
		}
	}
	for(i=0;i<c;i++)
	{
		count=0;
		for(j=0;x[j]!='\0';j++)
		{
			if(temp[i]==x[j])
			{
				count++;
			}
		}
		printf("%c appeared %d times\n",temp[i],count);
	}
}

