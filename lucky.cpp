#include<iostream>
using namespace std;
class LuckyNumber
{
	 public:
	 void checkForLucky(long long int n){
         int digit,count=0;
		 while(n>0){
            digit=n%10;
			n/=10;
		    if(digit==7 || digit==4)
				 count+=1;
	     }
		 if(count==7 || count==4)
			  cout<<"YES";
		  else
			   cout<<"NO";

	}

};
int main(){
long long int n;
cin>>n;
LuckyNumber obj;
obj.checkForLucky(n);
}