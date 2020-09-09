#include<iostream>
#include<string>
using namespace std;
int main(){
string s0("initial string");
string s1(s0);
string s2(s0,2,3);
string s3("Anothercharacter string",12);
string s4(10,'s');
string s5(s0.begin(), s0.begin()+6);

cout<<"s0: "<<s0<<endl;
cout<<"s1: "<<s1<<endl;
cout<<"s2: "<<s2<<endl;
cout<<"s3: "<<s3<<endl;
cout<<"s4: "<<s4<<endl;
cout<<"s5: "<<s5<<endl;

 return 0;	
}