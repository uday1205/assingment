#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<=6;i++)
	{
		for(k=1;k<=6-i;k++)
		{
		printf(" ");
	}

	for(j=1;j<=i*2-1;j++)
	{
		printf("*");
	}
		printf("\n");
}
}
