#include<iostream>
using namespace std;
class Domino
{
	 int M,N;
	 public:
		 void initialize(){
           cin>>this->M;
		   cin>>this->N;
	 }
	 void countSolutions(){
		 int domino=0;
		 if( (1<=M & N>=M & N<=16)){
		     domino=(M*N)/(2*1);
		     cout<<domino;
		 }
		 
	 }
};
int main(){
 Domino obj;
  obj.initialize();
  obj.countSolutions();
}