#include<iostream>
#include<string>
using namespace std;
int main(){
string s0("initial string");
for(auto i=s0.begin();i!=s0.end();i++)
	 cout<<*i<<" ";

 return 0;	
}