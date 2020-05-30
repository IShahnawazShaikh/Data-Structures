#include<iostream>
using namespace std;
class Football{
	private:
		string players;
	public:
	void initialize(){
     cin>>this->players;
	}
  void situation(){
   int i,sa=0,sb=0;
   for(i=0;i<this->players.length();i++){
	    if(this->players[i]=='1'){
			 sa+=1;
		      sb=0;
		}
		else{
            sb=sb+1;
			sa=0;
		}
		if(sa==7 || sb==7){
			 cout<<"YES";
              break;
		}
		
   }
 if(sa<7 & sb<7)
	  cout<<"NO";
  }
};
int main(){
 Football obj;
 obj.initialize();
  obj.situation();
return 0;
}