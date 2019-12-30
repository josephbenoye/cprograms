#include<stdio.h>
void main()
{
    char word[100],temp[100];
    int i=0,count=0,a,c;
    printf("Enter a word : ");
    scanf("%s",word);
    while(word[i]!='\0')//counting
    {
       count++;
       i++;
    }
	c = count;
    printf("count = %d\n",count);
    count=count-1;
    a = count;
    i = 0;
    while(word[i]!='\0')//assinging value from to another
    {
        temp[a]=word[i];
        a--;
        i++;
    }
    printf("Reversed word = %s\n",temp);
    count = 0;
	for(i=0;word[i]!='\0';i++)//checking each letter equal or not 
	{
		if(word[i]==temp[i])
		{
			count++;
		}
	}
	if(count==c)
	{
		printf("%s is a palindrome\n",word);
	}
	else
	{
		printf("%s is not a palindrome\n",word);
	}
}
