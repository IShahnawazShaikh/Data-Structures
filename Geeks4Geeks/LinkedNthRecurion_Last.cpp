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
void displayList(Node* head){
  Node* temp=head;
  while(temp!=NULL){
     cout<<temp->data<<" " ;
     temp=temp->next;
  }
}

void reverseNthRecursive(Node* head,int n){
  static int i=0;
 if(head==NULL)
     return;
  reverseNthRecursive(head->next,n);
  if(++i==n)
     cout<<head->data;
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
int n;
cin>>n;
displayList(head);
cout<<endl;
reverseNthRecursive(head,n); 



}