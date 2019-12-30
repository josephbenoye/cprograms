#include<stdio.h>
void main()
{
	static int i=1;
	i++;
	printf("joseph\n");
	if(i<=5)
	{
		main();
	}

}

