/*
------------------------------|بسم الله الرحمن الرحيم|------------------------------//
------------"IN THE NAME OF ALLAH, THE MOST GRACIUOS, THE MOST MERCIFUL"-------------//
__________________________________ShahnawazShaikh_____________________________________
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);	
int n;
// cin>>n;
vector<int> v{1,3,3,3,5,5,5,6,7,8,8,9,10};

// for(auto &i: v)
// 	cin>>i;
for(auto i: v)
	cout<<i<<" ";

vector<int>::iterator lower,upper;
lower=lower_bound(v.begin(),v.end(),9);
cout<<endl<<lower-v.begin();

lower=lower_bound(v.begin(),v.end(),4);
cout<<endl<<"Lower Not present "<<lower-v.begin();

upper=upper_bound(v.begin(),v.end(),9);
cout<<endl<<upper-v.begin();


upper=upper_bound(v.begin(),v.end(),4);
cout<<endl<<"upper Not present "<<upper-v.begin();


//int freq=upper_bound(v.begin(),v.end(),5)-lower_bound(v.begin(),v.end(),5);
cout<<endl<<"Frequency: "<<upper_bound(v.begin(),v.end(),5)-lower_bound(v.begin(),v.end(),5);

return 0;	
}