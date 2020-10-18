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


Node* deleteNodeLast(Node *head){
if(head==NULL) return NULL;
else if(head->next==NULL){
  delete head;
  return NULL;
}
Node* temp=head;
while(temp->next!=NULL) temp=temp->next;

temp->prev->next=NULL;
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
Node* head2=deleteNodeLast(head);
cout<<endl;
display(&head);

return 0; 
}