#include<iostream>
#include<set>
using namespace std;
template <typename type>
struct mycomp{
	   bool operator() (const type &first,const type &second) const {
		   return first>second;
	}
};
int main(){
set<int,mycomp<int>> s;
s.insert(10);
s.insert(11);
s.insert(1);
s.insert(110); 
s.insert(6);
for(auto &val : s)
	cout<<val<<endl;
return 0;
}