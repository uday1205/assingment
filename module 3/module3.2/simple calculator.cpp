#include<stdio.h>
main()
{
	int a,b;
	printf("Enter Number 1 : ");
	scanf("%d" , &a);
	
	printf("Enter Number 2 :  ");
	scanf("%d" , &b);
	
	printf("Addition : %d \n" , a+b );
	printf("Substraction : %d \n" , a-b);
	printf("Multiplication : %d \n" , a*b);
	printf("Division : %.2f \n ",(float)a/b);
	printf("Modulous = %d" , a%b);
	
}
