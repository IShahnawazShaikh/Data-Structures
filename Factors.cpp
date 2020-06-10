#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> factor(int num){
  vector<int> temp;
  for(int i=1;i*i<=num;i++){
    if(num%i==0){
		   temp.push_back(i);
		   if(i!=num/i)
			   temp.push_back(num/i);
		}
  }
  return temp;
}
int main(){
int num;
cin>>num;
vector<int> factors;
factors=factor(num);
sort(factors.begin(),factors.end());
for(auto val :factors){
  cout<<val<<" ";
}

return 0;
}
