#include<stdio.h>

class myclass{
	public:
		
		myclass()
		{
		printf("\nPress 1 for addition");
		printf("\nPress 2 for substraction");
		printf("\nPress 3 for multiplication");
		printf("\nPress 4 for division");
		printf("\nPress 5 for exit");
		}
		
	add()
		{
			int a,b;
			
			printf("\nEnter Number A : ");
			scanf("%d",&a);
			printf("\nEnter Number B : ");
			scanf("%d",&b);
			
			printf("\nAddition is : %d",a+b);
		}
		
		sub()
		{
			int a,b;
			
			printf("\nEnter Number A : ");
			scanf("%d",&a);
			printf("\nEnter Number B : ");
			scanf("%d",&b);
			
			printf("\nSubstraction is : %d ",a+b);
		}
		
			mul()
		{
			int a,b;
			
			printf("\nEnter Number A : ");
			scanf("%d",&a);
			printf("\nEnter Number B : ");
			scanf("%d",&b);
			
			printf("\nMultiplication is : %d",a*b);
		}
		Div()
		{
			int n,n1;
			printf("\nEnter Number 1 : ");
			scanf("%d",&n);
			printf("\nEnter Number 2 : ");
			scanf("%d",&n1);
			
			printf("\nDivision is : %f ",(float)n/n1);
		}
};
		main()
		{
			myclass obj;
		int choice;  
		while(1)
		{
	
			
		printf("\nEnter Choice : ");
		scanf("%d",&choice);	
		
		
		if(choice==1)
		{
			obj.add();
		}
		else if(choice==2)
		{
			obj.sub();
		}
		else if(choice==3)
		{
			obj.mul();
		}	
		else if(choice==4)
		{
			obj.Div();
		}
		else if(choice==5)
		{
			printf("\nThankyou for using our website ");
			break;
		}
			else
			{
				printf("\ninvalid choice ");
				break;
			}
		}
    }
