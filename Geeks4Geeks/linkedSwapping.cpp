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
void linkedSwap(Node* head,int key1,int key2){
  if(key2==key1) return;
  Node* temp=head;
  while(temp!=NULL){
   
   if(temp->data==key1 || temp->data==key2)
      temp->data=(key1+key2)-temp->data;
   temp=temp->next;
  }
}

void display(Node** head){
   Node* temp=*head;
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
display(&head);
int key1,key2;
cout<<endl;
cin>>key1>>key2;
linkedSwap(head,key1,key2);

display(&head);


}