#include<stdio.h>
main()
{
	char n;
	printf("Enter character : ");
	scanf("%c",&n);
	
	switch(n)
	{
		case '1':
			printf("%c is Monday",n);
			break;
			
			case '2':
			printf("%c is Tuesday ",n);
			break;
			
			case '3':
			printf("%c is Wednesday ",n);
			break;
			
			case '4':
			printf("%c is Thrusday ",n);
			break;
			
			case '5':
			printf("%c is Friday ",n);
			break;
			case '6' :
			printf("%c is Saturday ",n);
			break;
			case '7' :
			printf("%c is Sunday ",n);
	}
	
}
