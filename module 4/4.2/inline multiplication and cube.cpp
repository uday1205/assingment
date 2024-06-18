#include<iostream>
using namespace std;


class line
{
   public: 
            int m,n;
              line()
              {
   	          int x,y;
   	          cout<<"enter value X : ";
   	          cin>>x;
   	          cout<<"enter value Y : ";
   	          cin>>y;
   	          this->n=x;
   	          this->m=y;
   	          }
              inline int mul()
              {
              	
                            cout<<"Multiplication : "<<this->n*this->m<<endl;
                            
              }
              inline int cube()
              {
                            cout<<"cubic value of X : "<<this->n*this->n*this->n<<endl;
                            cout<<"cubic value of Y : "<<this->m*this->m*this->m;
              }
};

int main()
{
              line obj;
              obj.mul();
              obj.cube();
              
}
