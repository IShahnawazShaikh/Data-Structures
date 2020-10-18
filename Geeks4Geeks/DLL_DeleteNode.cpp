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


Node* deleteNode(Node *head, int x){
  if(head==NULL) return NULL;
  else if(head->next==NULL){
     Node* temp=head;
     head=head->next;
     delete temp;
     return NULL;
  }
else if(x==1){
   Node* temp=head;
     head=head->next;
     delete temp;
     return head;
}
Node* temp=head;
x-=1;
while(temp!=NULL && x>0){
  x-=1;
  temp=temp->next; 
}  

temp->prev->next=temp->next;
if(temp->next!=NULL)
   temp->next->prev=temp->prev;
delete temp;
return head;
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
int pos;
cin>>pos;
Node* head2=deleteNode(head,pos);
cout<<endl;
display(&head2);



return 0; 
}