#include<stdio.h>
main()
{
	double P,R,T;
	
	printf("Enter Principal Amount :  ");
	scanf("%lf" , &P);
	
	printf("Enter Intrest Rate : ");
	scanf("%lf" , &R);
	
	printf("Enter Tenure : ");
	scanf("%lf" , &T);
	
	printf("%lf is the Simple Intrest \n " ,(P*R*T)/100);

}
