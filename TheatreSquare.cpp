#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long int n,m,a,store;
cin>>n;
cin>>m;
cin>>a;
store=ceil((m+a-1)/a)*ceil((n+a-1)/a);
cout<<store;
return 0;
}