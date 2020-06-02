#include<iostream>
#include<map>
using namespace std;
int main(){
map <int,int> mp;
mp.insert(make_pair(4,200));
mp[4]=100;
mp[2]=100;
mp[5]=100;
mp[-4]=10;

for(auto itr=mp.begin(); itr!=mp.end(); itr++){
   cout<<endl<<itr->first<<"------"<<itr->second;
}
	return 0;
}