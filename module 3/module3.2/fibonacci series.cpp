#include<stdio.h>
main()
{
	int a=0,b=1,c=0,n,i;
	
	printf("Enter value : ");
	scanf("%d",&n);
	
	printf("%d",c);

	
	for(i=0;i<=n;i++)
	{
		
		a=b;
		b=c;
		c=a+b;
	printf("\n%d",c);	
	}
	
	
}
