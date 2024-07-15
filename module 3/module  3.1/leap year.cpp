#include<Stdio.h>
main()
{
	int n;
	printf("Enter the Year : ");
	scanf("%d" , &n);
	
	if(n%4==0)
	{
		printf("It is a Leap Year");
	}
	else 
	{
		printf("It is not a leap year");
	}
}
