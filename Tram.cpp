#include<iostream>
using namespace std;
class Tram{
	 public:
     int n;
	Tram(int n){
       this->n=n;
	}
	void minimum(){
       int i,TramValue=0;
	   int a,b,capacity=0;
	   for(i=1;i<=this->n;i++){
             if(capacity<TramValue)
			      capacity=TramValue;
			cin>>a;
			cin>>b;
			if(a<=TramValue){
				 TramValue-=a;
		   }
		   if(i!=n)
			  TramValue+=b;
	   }
	   TramValue=0;
	   cout<<capacity;
	}
};
int main(){
int n;
cin>>n;
if(n>=2 && n<=1000){
     Tram obj(n);
    obj.minimum();
}
return 0;
}