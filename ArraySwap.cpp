#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int i,t,n,*ar,*br,k;
cin>>t;
while(t>0){
 cin>>n;
 cin>>k;
ar=new int[n];
br=new int[n];
for(i=0;i<n;i++)
	cin>>ar[i];
for(i=0;i<n;i++)
	cin>>br[i];
sort(ar,ar+n,less<int>());
sort(br,br+n,greater<int>());
  i=0;
	while(k>0){
        if(ar[i]<br[i]){
		 ar[i]=(ar[i]+br[i])-(br[i]=ar[i]);
	   }
	   i++;
	   k--;
     }
 k=0;    
for(i=0;i<n;i++)
	k+=ar[i];
cout<<k<<endl;
t--;
}
return 0;
 }
//}