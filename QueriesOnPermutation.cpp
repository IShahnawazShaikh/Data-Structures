#include<iostream>
#include<vector>
using namespace std;
vector<int> processQueries(vector<int> &queries, int m) {
 vector<int> p;
 vector<int> answer;
 int index,i;
  for(i=1;i<=m;i++)
  	 p.push_back(i);
  for(int q: queries){
    for(i=0;i<m;i++){
       if(q==p[i]){
          p.erase(p.begin()+i);
          p.insert(p.begin(),q);
          answer.push_back(i);
        }	 
      } 	     
   }
 return answer;
   // for(auto val: answer){
   // 	 cout<<val<<" ";
   // }
}
int main(){
 int n,m,i;
 cin>>n>>m;
 vector<int> query(n);
 for(i=0;i<n;i++)cin>>query[i];
 processQueries(query,m);

 return 0;	
}