#include<stdio.h>
main()
{
	int n1,n2;
	
	printf("Enter Number 1 : ");
	scanf("%d" , &n1);
	
	printf("Enter Number 2 : ");
	scanf("%d", &n2);
	
	printf("\nBefor swappiing the values n1 and n2 = %d\t%d" , n1,n2);
	
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	
	printf("\nAfter swapping the values n1 and n2 = %d\t%d " , n1,n2);
}
