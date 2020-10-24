#include<iostream>
using namespace std;

class Node{
 public:
 Node* prev;
 Node* next;
 int data;
 Node(int data){
 this->data=data;
  prev=NULL;
  next=NULL;
 }
};

void createNodeEnd(Node** head,int data){
 Node* new_node=new Node(data);
 
 if(*head==NULL){
  *head=new_node;
  return;
 }

 Node* temp=*head;
 while(temp->next!=NULL){
 	temp=temp->next;
 }

  temp->next=new_node;
  new_node->prev=temp;

}
void createNodeFront(Node** head,int data){
 Node* new_node=new Node(data);
 
 if(*head==NULL){
  *head=new_node;
  return;
 }

 new_node->next=*head;
 (*head)->prev=new_node;
 *head=new_node;

}
void display(Node** head){
 
  Node* temp=*head;
  while(temp!=NULL){
  	cout<<temp->data<<" ";
  	temp=temp->next;
  }
}
Node* reverseDLL(Node* head){

 if(head==NULL)
    return NULL;
 if(head->next==NULL)
    return head;
 Node* temp=head;     
 while(temp->next!=NULL){
  
   Node* t=temp->next;
   temp->next=temp->prev;
   temp->prev=t;
   temp=temp->prev;
 }
 Node* t=temp->next;
 temp->next=temp->prev;
 temp->prev=t;
 return temp;
 //Second Way
 //  if(head==NULL)
 //    return NULL;
 // if(head->next==NULL)
 //    return head;
 // struct Node* temp=head; 
 // struct Node* t=NULL;
 // while(temp!=NULL){
  
 //   t=temp->prev;
 //   temp->prev=temp->next;
 //   temp->next=t;
 //   temp=temp->prev;
 //}
 
 return t->prev;

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);	

Node* head=NULL;


int t;
cin>>t;
while(t--){
 int data;
 cin>>data;
 createNodeFront(&head,data);

}

display(&head);


Node* head2=reverseDLL(head);
cout<<endl;
display(&head2);



return 0;	
}