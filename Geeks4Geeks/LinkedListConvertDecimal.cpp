#include<iostream>
using namespace std;
class Node{
    public:
	int data;
    Node* next;
};
Node* head=NULL;
void createNode(int data){
	Node* newNode=new Node();
    newNode->data=data;
	if(head==NULL){
		head=newNode;
		return;
	}
   newNode->next=head;
   head=newNode;
}
int displayLinkedList(Node* head){
	string s="";
    Node* temp=head;
	while(temp!=NULL){
         s=s+to_string(temp->data);
		temp=temp->next;
   }
  int base=1; 
  int ans=0;
  for(int i=0;i<s.size();i++){
     ans+=base*(s[i]-'0');
     base*=2;
  }
  return ans;
}
int main(){
int T;
cin>>T;
while(T--){
int data;	
cin>>data;
createNode(data);
}

int ans=displayLinkedList(head);


cout<<ans;


}