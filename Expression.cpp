#include<iostream>
using namespace std;
class Expression{
	public:
	int a,b,c;
	 void initialize(int a,int b,int c){
        this->a=a;
		this->b=b;
		this->c=c;
	 }
	 void find(){
		 int val;
		val=this->sum();
		val=this->sum2(val);
	    val=this->multiply(val);
	    val=this->sumAndMul(val);
	   val= this->mulAndSum(val);
	   cout<<val;
	 }
   int sum(){
      return a+b+c;
   }
   int sum2(int val){
      return ((a+b)*c) >val ? (a+b)*c : val;
   }
   int multiply(int val){
      return (a*b*c>val) ? a*b*c : val;

   }
   int sumAndMul(int val){
       return (a+(b*c))>val ? a+(b*c) : val; 
   }
   int mulAndSum(int val){
    return (a*(b+c))>val ? a*(b+c) : val; 
   }

};
int main(){
int a,b,c;
cin>>a>>b>>c;
Expression obj;
if((1<=a & a<=10) & (1<=b & b<=10) & (1<=c & c<=10)){
   obj.initialize(a,b,c);
   obj.find();
}
return 0;
}