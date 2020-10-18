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

void insertAfterN(Node** head,int data,int pos){
Node* new_node=new Node(data);
if(*head==NULL){
  *head=new_node;
  return;
}
Node* temp=*head;

while(temp->next!=NULL && pos>0){
  cout<<endl<<temp->data<<" pos: "<<pos;
  temp=temp->next;
  pos-=1;
}
if(pos!=0){
  cout<<endl<<"can't be inserted at ";
  return;
}

cout<<endl<<"current:"<<temp->data<<endl;
new_node->next=temp->next;
if(temp->next!=NULL)
  temp->next->prev=new_node;
new_node->prev=temp;
temp->next=new_node;

//cout<<endl<<temp->next->data;

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
cout<<"position: "<<endl;
int n;
cin>>n;
insertAfterN(&head,100,n);

cout<<endl;
display(&head);



return 0;	
}