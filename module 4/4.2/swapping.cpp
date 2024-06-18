#include<iostream>
using namespace std;
class A{
	private :
		int a,b;
		
		friend class B;
		
};

class B{
	public:
		swap(A& t)
		{
			cout<<"A : ";
			cin>>t.a;
			cout<<"B : ";
			cin>>t.b;
			cout<<"Before swapping : "<<t.a<<" "<<t.b<<endl;
			
			t.a=t.a+t.b;
			t.b=t.a-t.b;
			t.a=t.a-t.b;
			
			cout<<"After swapping  : "<<t.a<<" "<<t.b<<endl;
			
		}
};
main()
{
	A obj;
	B obj1;
	obj1.swap(obj);
}
