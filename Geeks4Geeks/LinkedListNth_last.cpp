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
int lastNthNode(Node* head,int n){
  Node* temp=head;
  int len=0;
  while(temp!=NULL){
     len+=1;
     temp=temp->next;
  }
 temp=head;
 len=(len-n+1);
 

 if(len<=0)
   return 0;
 len-=1;
 while(len){
   temp=temp->next;
   len-=1;
 }
 return temp->data;
}

displayList(Node* head){
Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";    
    temp=temp->next;
   }
}

int main(){
int T;
cin>>T;
Node* head=NULL;
while(T--){
int data; 
cin>>data;
createNode(&head,data);
}
//displayList(head);

int data;
cin>>data;
cout<<lastNthNode(head,data);
}