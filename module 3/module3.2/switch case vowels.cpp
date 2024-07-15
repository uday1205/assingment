#include<stdio.h>
main()
{
	char n;
	printf("Enter character : ");
	scanf("%c",&n);
	
	switch(n)
	{
		case 'A':
			printf("%c is vowel ",n);
			break;
			
			case 'E':
			printf("%c is vowel ",n);
			break;
			
			case 'I':
			printf("%c is vowel ",n);
			break;
			
			case 'O':
			printf("%c is vowel ",n);
			break;
			
			case 'U':
			printf("%c is vowel ",n);
			break;
			default :
			printf("%c is a constant ",n);
	}
	
}
