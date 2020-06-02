#include<iostream>
using namespace std;
class Capslock{
	
	public :
    string word;
	initialize(string word){
      this->word=word;
	}
	bool check();
	void changeCase();
};
bool Capslock::check(){
int i,ch;
bool status=false;
 for(i=1;i<this->word.length();i++){
	 ch=word[i];
     if(ch>=97 & ch<=122){
		 status=true;
         break;
	 }
 }
return status;
 }

void Capslock:: changeCase(){
	int i,ch,ch2;
	string str="";
  for(i=0;i<this->word.length();i++){
      ch=this->word[i];
	  if(97<=ch & ch<=122){
          ch2=ch-32;
		  str=str+(char)ch2;
	  }
	  else{
          ch2=ch+32;
		  str=str+(char)ch2;
	  }
  }
cout<<str;
}
int main(){
string word;
cin>>word;
Capslock obj;
obj.initialize(word);
if(obj.check()){
   cout<<word;
}
else
	obj.changeCase();

return 0;
}