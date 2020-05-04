#include<iostream>
using namespace std;
class AllPrime
{
	 private:
		 bool flag1;
	     int n,ar[1000];
	public :
	 AllPrime(){
	   flag1=true;
	 }
		void checkPrime(){
         int i;
		 cout<<"Enter Number to check prime or not"<<endl;
		 cin>>n;
		 for(i=2;i<n/2;i++){
             if(n%i==0){
				  this->flag1=false;
			      break;
			 }
		 }
	}
void findAllPrime(){
     int i,j,size=0;
	 if(this->flag1){
        cout<<this->n<<" is Prime"<<endl;
          for(i=2;i<this->n;i++){
            this->flag1=true;
                 for(j=2;j<=i/2;j++){
                     if(i%j==0){
					    flag1=false;
						break;
					 }
				}
            if(flag1){
                 ar[size]=i;
				size++; 
			}
		  }
        for(i=0;i<size;i++)
		    cout<<ar[i]<<" " ;   
		 }
	 else{
		 cout<<"Number is Not Prime";
	}
	findPair(size);
 }
 void findPair(int size){
	 int i,j;
	 cout<<endl;
       for(i=0;i<size;i++){
		     for(j=i+1;j<size;j++){
				    if((ar[i]+ar[j])==this->n)
						  cout<<"{"<<ar[i]<<","<<ar[j]<<"}"<<endl;
			 }
	    }
      }
};
int main(){
AllPrime obj;
obj.checkPrime();
obj.findAllPrime();
return 0;
}