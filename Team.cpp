#include<iostream>
using namespace std;
class Team
{
	 int n,solutions;
	 public:
		 void initialize(){
           cin>>this->n;
	 }
	 void countSolutions(){
		 int a,b,c,sol=0;
           while(n>0){
                 cin>>a;
				 cin>>b;
				 cin>>c;
				 if((a==1 & b==1& c==1) || (a==1 & b==1) ||(a==1 & c==1) || (b==1 & c==1))
					 sol+=1;
			   n--;
		   }
		   cout<<sol;
	 }
};
int main(){
 Team obj;
  obj.initialize();
  obj.countSolutions();
}