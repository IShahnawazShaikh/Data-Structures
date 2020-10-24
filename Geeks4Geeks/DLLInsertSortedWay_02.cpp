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

Node* insertSortedWay(Node* head,int x){
  Node* new_node=new Node(x);
 if(head==NULL)
     return NULL;
 if(x < head->data){
  new_node->next=head;
  head->prev=new_node;
  head=new_node;
  return head;
 } 

 Node* curr=head;

while(curr->next!=NULL && curr->next->data < new_node->data) curr=curr->next;

new_node->next=curr->next;
if(curr!=NULL)
   curr->prev=new_node;
new_node->prev=curr;
curr->next=new_node; 

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
int x;
cin>>x;
Node* head2=insertSortedWay(head,x);
cout<<endl;
display(&head2);

return 0;	
}