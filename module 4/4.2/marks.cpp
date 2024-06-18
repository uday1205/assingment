#include<iostream>
using namespace std;

class student{
	public:
		int a;
		A()
		{
			cout<<"Enter roll no. : ";
			cin>>a;
		}
};
class test:public student {
	public:
		int b,c;
		marks()
		{
			cout<<"Enter marks in ENG : ";
			cin>>b;
			cout<<"Enter marks in PHY : ";
			cin>>c;
		}
};

class result:public test{
	public:
		int d;
		total()
		{
			cout<<"Roll no. is : "<<a<<endl;
			cout<<"Marks in ENG : "<<b<<endl;
			cout<<"Marks in PHY : "<<c<<endl;
			cout<<"Total marks : "<<b+c<<endl;
		}
		
};
main()
{
	result obj;
	obj.A();
	obj.marks();
	obj.total();
}
