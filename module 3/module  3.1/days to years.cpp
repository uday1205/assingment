#include<stdio.h>
main()
{
	float d;
	
	printf("Enter the no. of days : ");
	scanf("%f" , &d);
	
	printf("No. of years = %.2f",(float) d/365);
}
