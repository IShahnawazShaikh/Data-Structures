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

void deleteOccurrence(Node* head,int key){
if(head==NULL)
    return;
 
Node* curr=head;
while(curr!=NULL){

 if(curr->data==key){
    
   Node* t=curr;
   if(head->data==curr->data) head=curr->next;
   else{
     curr->prev->next=curr->next;
     if(curr->next!=NULL) curr->next->prev=curr;
   }
 curr=curr->next;
 delete t; 
 }
 else curr=curr->next;
}

cout<<endl;
display(&head);
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

deleteOccurrence(head,2);


return 0;	
}