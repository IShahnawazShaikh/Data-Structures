#include<iostream>
#include<map>
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
void pairSum(Node* head,int sum){
 if(head==NULL)
    return;

Node* first=head;
Node* second=head;

while(second->next!=NULL) second=second->next;

while(first!=second && first->next!=second && (first!=NULL && second!=NULL)){

if( first->data+second->data > sum) second=second->prev;
else if(first->data+second->data < sum) first=first->next;
else {
  cout<<endl<<first->data<<" "<<second->data;
  first=first->next;
  second=second->prev;
 }

}
if(first!=second){
   if(first->data+second->data==sum)
     cout<<endl<<first->data<<" "<<second->data;
}

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
cout<<endl;
pairSum(head,7);

return 0;	
}