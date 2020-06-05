#include<iostream>
using namespace std;
int main(){
int n,anton=0,danik=0,i;
cin>>n;
char ch[n];
for(i=0;i<n;i++)
	cin>>ch[i];
for(i=0;i<n;i++){
	if(ch[i]=='A')
		anton+=1;
	else
		danik+=1;
  }
  string s=(anton>danik) ? "Anton" : (danik>anton) ? "Danik" : "Friendship";
  cout<<s;	
return 0;
}