#include<iostream>
using namespace std;
int main(){
 string str;
 int i,upper=0,lower=0,ch;
cin>>str;
for(i=0;i<str.length();i++){
	 ch=str[i];
     if(ch>=65 && ch<=90)
		  upper+=1;
	 else
		 lower+=1;
}
 if(upper>lower){
    for(i=0;i<str.length();i++)
	   str[i]=toupper(str[i]);
 }
 else{
      for(i=0;i<str.length();i++)
	   str[i]=tolower(str[i]);
 }
 cout<<str;
 return 0;
}