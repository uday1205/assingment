#include<iostream>
using namespace std;

class A{
	public:
		A()
		{
			int a,b;
			
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
			
			cout<<"Addition : "<<a+b<<endl;
			cout<<"Substraction : "<<a-b<<endl;
			cout<<"Division : "<<(float)a/b<<endl;
			cout<<"Multiplication : "<<a*b<<endl;
		}
};
main()
{
	A obj;
}
