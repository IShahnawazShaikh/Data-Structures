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
Node* deleteNthNode(Node* head,int pos){

 if(head==NULL ||  pos<=0)
    return NULL;
 if(pos==1){
    Node* temp=head;
    head=head->next;
    head->prev=NULL;
    delete temp;
    return head;
 }
 Node* curr=head;
 pos-=1;
 while(curr!=NULL && pos){
  curr=curr->next;
  pos-=1;
 }
 curr->prev->next=curr->next;
 if(curr->next!=NULL)
     curr->next->prev=curr->prev;
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
Node* h2=deleteNthNode(head,x);
display(&h2); 
return 0;	
}