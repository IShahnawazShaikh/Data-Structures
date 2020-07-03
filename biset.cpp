#include<iostream>
#include <bitset> 
using namespace std;
int main(){
int n;
cin>>n;
bitset<32> b(n);
cout<<b;
cout<<endl<<b.to_string();
cout<<endl<<b.to_ulong();

cout<<2 & 1;
return 0;
}