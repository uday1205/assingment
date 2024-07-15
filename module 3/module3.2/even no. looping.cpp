#include<stdio.h>
main()
{
	int i,n,count=0;
	for (i=1;i<=10;i++)
	{
		printf("enter number : ");
		scanf("%d",&n);
		if(n%2==0)
		{
		count++;
		}
	}
  printf("%d",count);
}
