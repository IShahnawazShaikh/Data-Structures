/*
------------------------------|بسم الله الرحمن الرحيم|------------------------------//
------------"IN THE NAME OF ALLAH, THE MOST GRACIUOS, THE MOST MERCIFUL"-------------//
__________________________________ShahnawazShaikh_____________________________________
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;

/*------Check prime upto 1e6-----------*/

vector<ll int> primes;
vector<bool> isPrime;
void seive(){
  isPrime.assign(1e6+1,true);
  ll int i,j;
  for(i=2;i*i<=1e6;i++){
     if(isPrime[i]){
        for(j=i*i;j<=1e6;j+=i){
           isPrime[j]=false;
    }
   }
   }
for(i=2;i<=1e6;i++){
   if(isPrime[i])
      primes.push_back(i);
   }
}

/*--------Prime factors------------*/
vector<ll int> primeFactors(ll int n){
ll int p_index=0;
ll int pf=primes[p_index];
vector<ll int> factors;
while(pf*pf<=n){
 while(n%pf==0){
    factors.push_back(pf);
    n/=pf;
  }
  pf=primes[++p_index];
}
if(n!=1)
  factors.push_back(n);
return factors;
}



int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);  

seive();
ll int n;
cin>>n;

for(auto i: primeFactors(n))
    cout<<i<<" "; 
return 0;
}
