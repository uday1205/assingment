#include<iostream>
using namespace std;
class A{
	public: 
	area()
	{
		int a,b;
		cout<<"length of rectangle : ";
		cin>>a;
		cout<<"breadth of rectangle : ";
		cin>>b;
		cout<<"Area of Rectangle : "<<a*b<<endl;
	}
	area(int i)
	{
		int c,d;
		cout<<"base of triangle : ";
		cin>>c;
		cout<<"height of triangle : ";
		cin>>d;
		cout<<"Area of Triangle : "<<(c*d)/2<<endl;
	}
	area(int f,int g)
	{
		int e;
		cout<<"Radius of Circle : ";
		cin>>e;
		
		cout<<"Area of Circle : "<<3.14*e*e<<endl;
	}
}; 
main()
{
	A obj;
	obj.area();
    obj.area(1);	
    obj.area(1,2);
}
