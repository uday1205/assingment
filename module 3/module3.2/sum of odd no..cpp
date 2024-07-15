#include<stdio.h>
main()
{
	int i,n,count=1,sum=0;
	for (i=1;i<=10;i++)
	{
		printf("enter number : ");
		scanf("%d",&n);
		if(n%2!=0)
		{
			sum = sum + count;
		}
		count++;
	}
	printf("\n%d",sum);
}
