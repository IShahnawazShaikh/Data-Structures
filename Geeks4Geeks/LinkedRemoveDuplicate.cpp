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
Node* removeDuplicates(Node* root){
  
  Node* temp=root;
  int data= temp->data;
  Node* prev=temp;
  temp=temp->next;

  while(temp!=NULL){
   if(temp->data==data){
     prev->next=temp->next;
     temp->next=NULL;
     temp=prev->next;
   } 
   else{
    prev=temp;
    data=temp->data;
    temp=temp->next;
   }
  }
 return root;

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

head=removeDuplicates(head);
cout<<endl;
display(&head);

}