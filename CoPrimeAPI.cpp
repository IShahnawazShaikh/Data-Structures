/*
------------------------------|بسم الله الرحمن الرحيم|------------------------------//
------------"IN THE NAME OF ALLAH, THE MOST GRACIUOS, THE MOST MERCIFUL"-------------//
__________________________________ShahnawazShaikh_____________________________________
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
vector<int> primes;
void seive(ll int num){
  vector<bool> isPrime(num+1,true);
  ll int i,j;
  for(i=2;i*i<=num;i++){
     if(isPrime[i]){
        for(j=i*i;j<=num;j+=i){
           isPrime[j]=false;
		}
	 }
   }
for(i=2;i<=num;i++){
   if(isPrime[i])
	    primes.push_back(i);
   }
}

ll int co_prime(ll int n){
seive(n);	
ll int ans=n;
ll pf_index=0;
int pf=primes[pf_index];
while(pf*pf < n){

  if(n%pf==0) ans=ans-(n/pf);

  while(n%pf==0) n/=pf;
  
  pf=primes[++pf_index];
}
if(n!=1) ans=ans-(n/pf);
return ans;
}
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);	
ll int n;
cin>>n;
ll int cnt=co_prime(n);
cout<<cnt;


return 0;	
}