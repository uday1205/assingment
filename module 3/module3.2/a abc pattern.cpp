#include<stdio.h>
main()
{
	int i,j,n=65;
	
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",(char)(j+n));
		}
			printf("\n");
    }
}

