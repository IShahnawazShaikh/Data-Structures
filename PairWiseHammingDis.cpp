/*
------------------------------|بسم الله الرحمن الرحيم|------------------------------//
------------"IN THE NAME OF ALLAH, THE MOST GRACIUOS, THE MOST MERCIFUL"-------------//
__________________________________ShahnawazShaikh_____________________________________
*/

#include<iostream>
#include<vector>
#include<bitset>
using namespace std;
#define ll long long
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);	
ll int n,i;
cin>>n;
vector<ll int>v(n);
for(auto &i: v)cin>>i;

ll int b[64]={0};

for(auto i: v){
 bitset<64> s(i);     //converting into binary number
  for(i=0;i<63;i++){
   if(s[i]){
   	  b[i]++;
   	}
 }
}
ll int sum=0,count;
for(auto i: b){
	count=i;
	sum+=count*(n-count)*2;
}
cout<<"Haming Distance :"<<sum;



// for(auto i: v)
// 	cout<<i<<" ";



 return 0;	
}