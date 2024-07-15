#include<stdio.h>
main()
{
	int n,i,fac=1;
	printf("Enter Number 1 : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("\nFactorial is : %d", fac);
}
