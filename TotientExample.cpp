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
void seive(){
  vector<bool> isPrime(1e7+5,true);
  ll int i,j;
  for(i=2;i*i<=10000000;i++){
     if(isPrime[i]){
        for(j=i*i;j<=10000000;j+=i){
           isPrime[j]=false;
		}
	 }
   }
for(i=2;i<=10000000;i++){
   if(isPrime[i])
	    primes.push_back(i);
   }
}

ll int co_prime(ll int n){
ll int ans=n;
ll int pf_index=0;
ll int pf=primes[pf_index];
while(pf*pf < n){

  if(n%pf==0) ans=ans-(n/pf);

  while(n%pf==0) n/=pf;
  
  pf=primes[++pf_index];
}
if(n!=1) ans=ans-(n/pf);
return ans;
}

ll int factor(ll int n){
  ll int pf_index=0;
  ll int pf=primes[pf_index];

  ll int ans=1;

  while(pf*pf<=n){
   ll int power=0;
   if(n%pf==0){
    while(n%pf==0){
      n/=pf;
      power++;
    }
   }
   ans*=(power+1);
   pf=primes[++pf_index];  
  }
  if(n!=1) ans*=2;
  return ans;
}
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);	
ll int n;
cin>>n;
seive(); 


ll int cnt1=co_prime(n);

ll int cnt2=factor(n);

cout<<n-cnt1-cnt2+1;


return 0;	
}