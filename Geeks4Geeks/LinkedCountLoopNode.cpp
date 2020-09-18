#include<iostream>
#include<unordered_set>
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
    newNode->next=NULL;
    return;
  }
   newNode->next=*head;
   *head=newNode;
}
int countNode(Node* loop_node){
    Node* ptr1=loop_node;
    Node* ptr2=loop_node;
    int k=1;
    while(ptr1->next!=ptr2){
         ptr1=ptr1->next;
         k+=1;
     }
  return k;       
}
void detectLoop(Node* head){
  Node* p1=head;
  Node* p2=head;
  Node* prev;
  while(p2!=NULL && p2->next!=NULL){
    p2=p2->next->next;
    prev=p1;
    p1=p1->next;
    if(p1==p2)
        return countNode(p1); 
   }
   return 0;
   
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
 head->next->next->next=head;  // To allow Loop exist


detectLoop(head); //? cout<<"Loop exist:"<<endl : cout<<"Not exist: ";   
//cout<<p1->data;
//pirntList(&head);




}