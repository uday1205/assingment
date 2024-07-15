#include<stdio.h>

main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
	for(i=1;i<=11;i++)//raw
	{
			for(j=1;j<=7-i;j++)//colloum
		{
			printf(" *");
		}
		for(k=1;k<=11-i;k++)//space
		{
			printf(" ");
		}
		printf("\n");
	}
}
