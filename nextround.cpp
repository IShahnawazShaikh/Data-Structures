#include<iostream>
using namespace std;
class NextRound{
	 int n,k,*ar;
	 public:
		 void initialize(){
		   cin>>this->n;
		   cin>>k;
		   this->ar=new int[n];
	 }
	 void countParticipant(){
		int i=0,next=0,temp;
		while(i<n){
           cin>>this->ar[i];
		   i++;
		}
		temp=ar[k-1];
		i=0;
		while(i<n){
            if(this->ar[i]>=temp & this->ar[i]!=0){
				next+=1;
			}
		   i++;
		 }
		 cout<<next;
	 }
};
int main(){
 NextRound obj;
  obj.initialize();
  obj.countParticipant();
  return 0;
}