#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int t,n,m,element,index=0,i,j;
cin>>t;
while(t>0){
  cin>>n;
  cin>>m;
  vector<int> pre;
  vector<int> ar;
  vector<int> result;
  pre.assign(n+1,0);
  ar.assign(m,0);
  result.assign(n,0);
  index=0;
  for(i=0;i<n;i++){
    cin>>pre[i];
    }
   for(i=0;i<m;i++){
      	 cin>>ar[i];
   }
   for(i=0;i<m;i++){
   	   for(j=0;j<n;j++){
      	 if(ar[i]==pre[j]){
      	 	result[index]=pre[j];
      	 	pre[j]=0;
      	 	index++; 
      	 }
   	   }
      	
      }
     sort(pre.begin(),pre.end());
     for(i=index;i<n+1;i++){
     	 result[index]=pre[index+1];
     	 index++;
     }
     for(auto itr=result.begin();itr!=result.end();itr++){
    	 cout<<*itr<<" ";
      }
cout<<endl;      
t--;
}
return 0;	
}