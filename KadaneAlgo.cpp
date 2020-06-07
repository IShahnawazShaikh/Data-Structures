//  #Amazon #Facebook #Linked #Microsoft 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Max_Sum{
  public:
   int maxSubArraySum(const vector<int> &v);	
};
int Max_Sum::maxSubArraySum(const vector<int> &v){
        int sum=0,max=0;
		int x=*max_element(v.begin(),v.end());
	    if(x<0)
			return x;
		 for(auto &val:v){
             sum+=val;
			 if(sum<0)
				 sum=0;
			 else if(sum>max)
				  max=sum;
		  }
    return max;
}
int main(){
 vector<int>v;
 v.push_back(1);
 v.push_back(2);
 v.push_back(-2);
 v.push_back(5);
 v.push_back(-4);
 v.push_back(2);
 v.push_back(1);
 v.push_back(3);
Max_Sum obj;
cout<<obj.maxSubArraySum(v);

return 0;	
}
