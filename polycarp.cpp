#include<iostream>
using namespace std;
int calc(long int emerald,long int stick,long int diamond){
   if((stick==0 | diamond==0) | (stick==1 & diamond==1))
       return emerald;
   if(stick<diamond)
   	  stick=(stick+diamond)-(diamond=stick);
    stick-=2;
    diamond-=1;
    emerald+=1; 
     return calc(emerald,stick,diamond);

}
int main(){
long int t,stick,diamond,emerald=0;
cin>>t;
while(t>0){
cin>>stick>>diamond;
if(!(stick<=1 & diamond<=1)){
   
	cout<<calc(emerald,stick,diamond);
}
else
 cout<<0;
 cout<<endl;
t--;	
}
return 0;	
}