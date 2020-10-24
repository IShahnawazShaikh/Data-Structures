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
Node* pairSum(Node* head,int sum){

 if(head==NULL)
    return NULL;

map<int,int> mp;
Node* temp=head;

while(temp!=NULL){
  if((sum-temp->data) < 0){
    temp=temp->next;
    continue;
  } 
  else{
      if(mp.find(temp->data)!=mp.end()){
          cout<<endl<<temp->data<<" "<<mp[temp->data];
          mp.erase(temp->data);
     }
     else{
         mp[sum-temp->data]=temp->data;
     }
  }
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
pairSum(head,7);




return 0;	
}