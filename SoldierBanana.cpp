#include<iostream>
using namespace std;
class Banana{
	private:
		int first,money,n;
	public:
	Banana(int k,int n,int w){
          this->first=k;
		  this->money=n;
		  this->n=w;
	}
	void amountBorrow(){
        int i,totalMoney=0;
		for(i=1;i<=this->n;i++)
			 totalMoney+=first*i;
		if(this->money>totalMoney){
			totalMoney=0;
		    cout<<totalMoney;
		 }
       else{
        cout<<totalMoney-this->money;
	   }
	}
};
int main(){
int k,n,w;
cin>>k;
cin>>n;
cin>>w;
Banana *bn=new Banana(k,n,w);
bn->amountBorrow();

return 0;
}