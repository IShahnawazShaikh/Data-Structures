#include<iostream>
#include<map>
using namespace std;
class BoyGirl{
	private:
		string username;
	public:
	BoyGirl(string username){
      this->username=username;
	}
	bool findGender();
};
bool BoyGirl::findGender(){
    int i;
     map<char,int>mp;
    for(i=0;i<this->username.length();i++)
       mp[username[i]]=i;
	return mp.size()%2==0 ? true : false;
}
int main(){
string username;
cin>>username;
if(username.length()<100){
     BoyGirl *obj=new BoyGirl(username);
     if(obj->findGender())
     	cout<<"CHAT WITH HER!";
     else
     	cout<<"IGNORE HIM!";
    delete obj;
   }
 }