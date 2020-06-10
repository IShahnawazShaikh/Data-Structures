#include<iostream>
using namespace std;
int gcd(int a,int b){
 if(b==0)
	  return a;
   return gcd(b,a%b);
}
int main(){
int n,i,result,lcm;
cin>>n;
int ar[n];
for(i=0;i<n;i++){
   cin>>ar[i];
}
result=ar[0];
lcm=ar[0];
for(i=1;i<n;i++){
lcm*=ar[i];
 result=gcd(result,ar[i]);
}
cout<<"GCD: "<<result<<endl;
cout<<"LCM: "<<lcm/result<<endl;
return 0;
}
