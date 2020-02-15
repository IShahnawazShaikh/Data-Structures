#include<iostream>
using namespace std;
class RotateSum{ 
	private :
    int *ar,sum,n;
	public :
     RotateSum(){
     ar=NULL;
	 sum=0;
	 }
   int initialize(){   
			int i;
            cin>>n; 
            ar=new int[n];
            for(i=0;i<n;i++){
               cin>>ar[i];  
            }
			return n;
	  }
 void max_sum(){
    int temp,i;
		temp=ar[0];
    ar[0]=ar[n-1];
     for(i=n-1;i>1;i--){
     ar[i]=ar[i-1];
  }
 ar[1]=temp; 
   for(i=0;i<n;i++)
        sum+=i*ar[i];
 }
 void result(){
    cout<<endl<<sum;
	this->sum=0;
  }
};
int main(){
RotateSum obj;
int T;
cin>>T;
while(T>0){
 int n=obj.initialize();
 while(n>0){
 obj.max_sum();
 n--;
 }
 obj.result();
 T--;
 cout<<endl;
}
return 0;
}