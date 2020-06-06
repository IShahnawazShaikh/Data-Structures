#include<iostream>
using namespace std;
void reArrange(int ar[],int br[],int n){
  int i;
  for(i=0;i<n;i++){
  	if(ar[i]>=0)
        br[ar[i]]=ar[i];
    }
  for(i=0;i<n;i++){
    cout<<br[i]<<" ";
  }
 }
int main(){
 int t,n,i;	
  cin>>t;
 while(t>0){
  cin>>n;
  int ar[n],br[n];
  for(i=0;i<n;i++){
    cin>>ar[i];
    br[i]=-1;
  } 
  reArrange(ar,br,n);
  cout<<endl;
  t--;	
 }


}