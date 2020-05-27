#include<iostream>
using namespace std;
class WrongSubtraction{
	int n,k;
	public:
	void initialize(int n,int k){
        this->n=n;
		this->k=k;
	}
   void findNumber(){
	   int temp;
        while(k>0){
            temp=n%10;
			 if(temp>0)
                 this->n-=1;
			 else
                    this->n/=10;
         k--;
		}
		cout<<this->n;
   }
};
int main(){
int n,k;
cin>>n;
cin>>k;
if((n>=2 & n<=1000000000) & (k>=1 & k<=50)){
    WrongSubtraction obj;
     obj.initialize(n,k);
	 obj.findNumber();
}
return 0;
}