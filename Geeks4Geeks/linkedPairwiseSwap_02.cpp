#include<iostream>
using namespace std;
class Node{
    public:
  int data;
    Node* next;
};

void createNode(Node** head,int data){
  Node* newNode=new Node();
    newNode->data=data;
  if(*head==NULL){
     *head=newNode;
    return;
  }
   newNode->next=*head;
   *head=newNode;
}
void pairWiseSwap(Node* head){
  Node* temp=head;
  Node* prev=NULL;
  int cnt=0;
  while(temp!=NULL){
    cnt+=1;
    if(cnt==2){
       swap(prev->data,temp->data);
       cnt=0;
    }
    else
      prev=temp;
    temp=temp->next;
  }
}

void display(Node** head){
   Node* temp=*head;
   while(temp!=NULL){
     cout<<temp->data<<" ";
     temp=temp->next;
   }
}
int main(){
int T;
cin>>T;
Node* head=NULL;
while(T--){
int data; 
cin>>data;
createNode(&head,data);
}
display(&head);
pairWiseSwap(head);
cout<<endl;
display(&head);


}