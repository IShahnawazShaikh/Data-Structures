#include<iostream>
using namespace std;
class Node{
    public:
  int data;
    Node* next;
};
void createNode(Node** head,int data){
  Node* newNode=new Node();
  newNode->data=data;
  if(*head==NULL){
    *head=newNode;
    return;
  }
   newNode->next=*head;
   *head=newNode;
}
int cnt=0;
int findKey(Node* head,int key){
  if(head==NULL)
       return cnt;
  if(head->data==key){
       cnt+=1;
  }
  return findKey(head->next,key);  
}
void pirntList(Node** head){
  Node* temp=*head;
  while(temp!=NULL){
     cout<<temp->data<<" ";
      temp=temp->next;
  }
}
int main(){
Node* head=NULL;
int T;
cin>>T;
while(T--){
int data; 
cin>>data;
createNode(&head,data);
}
// pirntList(&head);
// cout<<endl;
int key;
cin>>key; 
cout<<endl<<findKey(head,key);
}