#include<iostream>
using namespace std;

class Calculator{
	public : 
	 fun(int a,int b)
	 {
	 	cout<<"Addition : "<<a+b<<endl;
	 }
	 fun(int c,int d,int e)
	 {
	 	cout<<"Subtraction : "<<c-d<<endl;
	 }
	 fun(int f,int g,int h, int i)
	 {
	 	cout<<"Multiplication : "<<f*g<<endl;
	 }
	 fun(int j,int k,int l,int m,int n)
	 {
	 	cout<<"Division : "<<(float)j/k<<endl;
	 }
};


main()
{
	int n1,n2;
	
	cout<<"Enter Number : ";
	cin>>n1;
	
	cout<<"Enter Number : ";
	cin>>n2;
	
	Calculator obj;
	obj.fun(n1,n2);
	obj.fun(n1,n2,4);
	obj.fun(n1,n2,1,2);
	obj.fun(n1,n2,1,2,3);
	
	
}
