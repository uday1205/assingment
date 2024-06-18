#include<iostream>
using namespace std;

class A {
	public:
		string m;
		int n;
		A()
		{
			cout<<"Welcome to tops banking ";
			cout<<"press 1 to Register Account"<<endl;
			cout<<"press 2 to Cash Withdrawl After checking balance"<<endl;
			cout<<"press 3 to Cash Deposit"<<endl;
			cout<<"press 4 to display name and balance";
			cout<<"press 5 to exit";
		}
		
		Register()
		{
			string a;
			int b,c,d;
			cout<<"Enter Account Holder Name : "<<endl;
			cin>>a;
			this->m=a;
			cout<<"Enter Account Number : "<<endl;
			cin>>b;
			cout<<"Type of  Account : press\t 1. current\t 2.saving "<<endl;
			cin>>c;
			cout<<"Enter Opening Amount : "<<endl;
			cin>>d;
			cout<<"Opening Account Balance : "<<d<<endl;
			this->n=d;
		}
		withdrawl()
		{
			cout<<"Current Balance : "<<this->n<<endl;
			int a;
			cout<<"Enter Withdrawl Amount "<<endl;
			cin>>a;
			if(a<=this->n)
			{
			cout<<"remaining balance : "<<this->n-a<<endl;
		}
			else
			{
				cout<<"insufficiant balance";
			}
			
		}
		
		deposit()
		{
			int a;
			cout<<"Enter Deposit Amount "<<endl;
			cin>>a;
			cout<<" Current Balance  : "<<this->n+a<<endl;
		}
		Account()
		{
		cout<<"Account Holder Name : "<<this->m<<endl;
		cout<<"Current Balance : "<<this->n<<endl;	
		}
		
};


main()
{
		{
		A obj;
		int choice;  
		while(1)
		{
	cout<<"\nEnter Choice : "<<endl;
		cin>>choice;
		
		if(choice==1)
		{
			obj.Register();
		}
		else if(choice==2)
		{
			obj.withdrawl();
		}
		else if(choice==3)
		{
			obj.deposit();
		}	
		else if(choice==4)
		{
			obj.Account();
		}
		else if(choice==5)
		{
			cout<<"Thankyou for using our website";
			break;
		}
		else 
		{
			cout<<"Invalid choice";
			break;
		}
		
	
        }
        }
} 
