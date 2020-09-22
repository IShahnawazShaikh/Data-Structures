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
  int cnt=0;
  Node* a=NULL;
  Node* b=NULL;
  bool st=true;
  while(temp!=NULL){
    
    if(st){
       a=temp;
       cnt+=1;
       st=false;
    }
    else{
      b=temp;
      cnt+=1;
      st=true;
    }

    if(cnt==2){
       cnt=0;
       swap(a->data,b->data);
    }
    temp=temp->next;
  }
  return head;
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