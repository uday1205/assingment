#include<iostream>
using namespace std;
class A{
	public : 
	int i,j;
	char a[10],b[10],c[10];
	conc()
	{
		cout<<"Enter String : ";
	    cin>>a;
	    cout<<"Enter String : ";
	    cin>>b;
	}
	conc(int j)
	{
	  for(i=0;a[i]!='\0';i++)
	  {
		c[i]=a[i];
	  }
	  for(j=0;b[j]!='\0';j++)
	  {
		c[i]=b[j];
		i++;
	  }
	  c[i]='\0';
	  cout<<"\nString is : "<<c;
	}
};
main()
{
	A obj;
	obj.conc();
	obj.conc(1);

}
