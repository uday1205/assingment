#include<iostream>
using namespace std;
class A{
	private :
		int c,d;
		
		friend class B;
		
};

class B{
	public:
		max(A& t)
		{
			cout<<"A : ";
			cin>>t.c;
			cout<<"B : ";
			cin>>t.d;
			if(t.c>t.d)
			{
				cout<<"Max number : "<<t.c;
			}
			else
			{
				cout<<"Max number : "<<t.d;
			}
		}
};
main()
{
	A obj;
	B obj1;
	obj1.max(obj);
}
