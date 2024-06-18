#include<iostream>
using namespace std;

class person{
	public:
	string a; 
	int b;
	Name()
	{
	cout<<"Enter Name : "<<endl;
			cin>>a;	
	}
	age()
	{
	cout<<"Enter Age : "<<endl;
			cin>>b;	
	}
};
class student{
	public:
		int p;
		percentage()
		{
		cout<<"Enter Percentage : "<<endl;
			cin>>p;	
		}
};
class teacher{
	public:
		int s;
		salary()
		{
		cout<<"Enter Salary : "<<endl;
			cin>>s;	
		}
};
class input:public person,public student,public teacher{
	public:
		show()
		{
			cout<<"Name is : "<<a<<endl;
			cout<<"Age is : "<<b<<endl;
			cout<<"Percentage is : "<<p<<endl;
			cout<<"Salary is : "<<s<<endl;
		}
};

main()
{
	input obj;
	obj.Name();
	obj.age();
	obj.percentage();
	obj.salary();
	obj.show();
}
