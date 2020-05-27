#include<iostream>
using namespace std;
int main(){
 string temp,w,t;
 int i;
 cin>>w;
 cin>>t;
for(i=t.length()-1;i>=0;i--)
	  temp=temp+t[i];

 if((w.compare(temp))==0){
    cout<<"YES";
 }
 else{
    cout<<"NO";
 }
 
 return 0;
}