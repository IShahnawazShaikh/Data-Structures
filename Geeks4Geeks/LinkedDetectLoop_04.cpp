#include<iostream>
#include<unordered_set>
using namespace std;
class Node{
    public:
    int data;
    int flag;
    Node* next;
};
void createNode(Node** head,int data){
  Node* newNode=new Node();
  newNode->data=data;
  if(*head==NULL){
    *head=newNode;
    newNode->next=NULL;
    return;
  }
   newNode->next=*head;
   *head=newNode;
}

bool detectLoop(Node* head){
  Node* temp=new Node();

  while(head!=NULL){
    
    if(head->next==NULL)
       return false;
    if(head->next==temp)
       return true;

    Node* t=head->next; 
    head->next=temp;
    head=t;   
  }
  return false;
}

void pirntList(Node** head){
  Node* temp=*head;
  while(temp!=NULL){
     cout<<temp->data<<" ";
      temp=temp->next;
  }
  cout<<endl;
}
int main(){
Node* head=NULL;
int T;
cin>>T;
while(T--){
int data; 
cin>>data;
createNode(&head,data);
}
pirntList(&head);

 //head->next->next->next=head;  // To allow Loop exist


detectLoop(head) ? cout<<"Loop exist:"<<endl : cout<<"Not exist: ";   





}