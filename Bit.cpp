#include<iostream>
using namespace std;
class Bit{
  int n;
  public :
  void solution(){
    cin>>this->n;
	int i,x=0;
	if(1<=n & n<=150){
      char *s=new char[n];
	  for(i=0;i<n;i++){
           cin>>s[i];
				 if(s[i]=='+')
					 x++;
					 if(s[i]=='-')
					 x--;
			}
			cout<<x;
		 }
	 }
};
int main(){
Bit obj;
obj.solution();


return 0;
}