#include<iostream>
using namespace std;

template<typename T>
T mymax(T x,T y)
{
	cout<<"Values Before swapping : "<<x<<" "<<y<<endl;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"Values After swapping : "<<x<<" "<<y;
}


main()
{
	int n1,n2;
	cout<<"Enter value 1 : "<<endl;
	cin>>n1;
	cout<<"Enter value 2 : "<<endl;
	cin>>n2;
	mymax(n1,n2);
	
}

