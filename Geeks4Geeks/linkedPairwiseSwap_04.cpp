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
Node* pairWiseSwap(Node* head){
  Node* temp=NULL;

  if(head==NULL)
     return head;
  if(head->next!=NULL){
     swap(head->data,head->next->data);
     pairWiseSwap(head->next->next);
     temp=head;
     return temp;
  } 
  else
  return head;
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
head=pairWiseSwap(head);
cout<<endl;
display(&head);


}