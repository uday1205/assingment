#include<stdio.h>
main()
{
	float y;
	
	printf("Enter the no. of years : ");
	scanf("%f" , &y);
	
	printf("No. of days = %.2f",(float) 365*y);
}
