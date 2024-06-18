#include<iostream>
using namespace std;
template<typename T>
T mymax(T a[])
    {
    	int i,j,temp;
	for( i=0;i<4;i++)
	{
		for( j=i+1;j<4;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\nAscending order is : "<<endl; 
	for(i=0;i<4;i++)
	{
		cout<<" "<<a[i];
	}
    
	}
	main()
	{
		int b[]={10,25,1,60};
	    mymax(b);
	    char c[]={'a','c','f','r'};
	    mymax(c);
	
	}
