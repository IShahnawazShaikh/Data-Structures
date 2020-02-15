#include<iostream>
using namespace std;
class Rearrange{
	 private :
		 int *ar;
	 public:
		 void arrange();
};
int main(){
   Rearrange obj;
   obj.arrange();
   return 0;
}
void Rearrange::arrange(){
   int i,n,temp;
   cout<<"Enter Size of Array"<<endl;
   cin>>n;
   this->ar=new int[n];
   int *ar2=new int[n];
  cout<<endl<<"Enter dinstinct element range from 0 to "<<n-1<<endl;
   for(i=0;i<n;i++)
	     cin>>ar[i];
   for(i=0;i<n;i++){
	    temp=ar[i];
		ar2[temp]=i;
    }
	//for(i=0;i<n;i++)             originl array
		//  cout<<ar[i]<<" ";
	//cout<<endl;
	for(i=0;i<n;i++)
		  cout<<ar2[i]<<" "; 
	delete []ar;
	delete []ar2;
}
