#include<iostream>
using namespace std;
class A{
	public:
	int i,a[100],b[100],e; 
	 add()
	 {
	 	cout<<"Enter size of martix : ";
	 	cin>>e;
	 	
	 	cout<<"Enter values for matrix 1 : ";
	 	for(i=0;i<e;i++)
	 	{
	 	   cin>>a[i];	
		}
		cout<<"Enter values for matrix 2 : ";
		for(i=0;i<e;i++)
	 	{
	 	   cin>>b[i];	
		}
	 }
	 add(int j)
	 {
	 	int c[200];
	 	cout<<"Matrix 1 : ";
		for(i=0;i<e;i++)
	 	{
	 	   cout<<"\n"<<a[i]<<endl;	
		}
		cout<<"Matrix 2 : ";
		for(i=0;i<e;i++)
		{
			cout<<"\n"<<b[i]<<endl;
		}
		for(i=0;i<e;i++)
	 	{
	 		c[i]=a[i]+b[i];
		}
		cout<<"Addition of matrices : ";
		for(i=0;i<e;i++)
	 	{
	 		cout<<" "<<c[i];
		}
		
		
	 }
	 
};

main()
{
	A obj;
	obj.add();
	obj.add(1);
}
