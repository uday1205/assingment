#include<iostream>
using namespace std;

class cricketer{
	public: 
	string n,m;
	cricketer()
	{
		string a,b;
		cout<<"Enter name of Batsman : ";
		cin>>a;
		
		cout<<"Enter Country of Batsman : ";
		cin>>b;
		this->n=a;
		this->m=b;
	}
};
class batsman:public cricketer{
	public:
		batsman()
		{
			int x,y,z;
			cout<<"Total runs"<<endl;
			cin>>x;
			cout<<"Average runs"<<endl;
			cin>>y;
			cout<<"Best performance"<<endl;
			cin>>z;	
			cout<<"\n\n\n\nBatsman Name : "<<this->n<<endl;
			cout<<"Country : "<<this->m<<endl;
			cout<<"Total Runs : "<<x<<endl;
	        cout<<"Average Runs : "<<y<<endl;
	        cout<<"Best Performance : "<<z<<endl;
		}
};
main()
{
	batsman obj;
	

}

