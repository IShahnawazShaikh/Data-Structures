#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
vector<int> v{1,2,3,4,5,6,7,8};
vector<int> v2(v.size());;
//mqp
transform(v.begin(),v.end(),v2.begin(),[](int & val){
	return val*3;
});
cout<<"After Map value of v2 :"<<endl;
for(auto &val: v2)
	 cout<<endl<<val;

//filter
vector<int>::iterator enditr=remove_if(v2.begin(),v2.end(),[](int & val){
    if(val%2==0)
    	return true;
    else
    return false;
});
cout<<endl<<"After Filter value of v2 :"<<endl;
for(auto itr=v2.begin();itr!=enditr;itr++)
    cout<<*itr<<endl;
//reduce
int sum=accumulate(v2.begin(),enditr,0,[](int first,int second){
   return first+second;
});
cout<<"Sum:"<<sum;
return 0;
}
