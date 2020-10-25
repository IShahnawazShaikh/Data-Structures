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

Node* removeDuplicate(Node* head){
 if(head==NULL) return NULL;
 else if(head->next==NULL) return head;
  Node* pr=head;     
  Node* curr=head->next;     
  
 while(curr!=NULL){
 
 if(curr->data==pr->data){
   pr->next=curr->next;
   Node* t=curr;
   if(curr->next!=NULL) curr->next->prev=pr;
   curr=curr->next;
   delete t;
}
else{
   pr=curr;
   curr=curr->next;
 }
}
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
Node* h2=removeDuplicate(head);
cout<<endl;
display(&h2);


return 0;	
}