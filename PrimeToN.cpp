#include<iostream>
#include<vector>
using namespace std;
int main(){
int num,i,j;
cin>>num;
  vector<bool> isPrime(num+1,true);
    for(i=2;i*i<=num;i++){
     if(isPrime[i]){
        for(j=i*i;j<=num;j+=i){
           isPrime[j]=false;
		}
	 }
   }
for(i=2;i<=num;i++){
   if(isPrime[i])
	    cout<<i<<" ";
}
string s=(isPrime[7]) ? "Yes" : "No"; 
cout<<s;

return 0;
}
