#include<iostream>
using namespace std;
class StringTask{
   private:
	   string s;
  public:
    StringTask(string s){
        this->s=s;
  }
  void removeVowels(){
       int i;
	   string temp="";
	   for(i=0;i<this->s.length();i++){
              if(!(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u')){
                  char c=tolower(s[i]);
				  temp=temp+"."+c;
			  }
	   }
	   cout<<temp;
  }
};
int main(){
string s;
cin>>s;
if(s.length()>=1 & s.length()<=100){
   StringTask obj(s);
   obj.removeVowels();
   
}
return 0;
}