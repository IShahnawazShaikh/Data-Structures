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


int findNthNode(Node* head,int n){
 if(head==NULL)
   return -1;
 int cnt=0;
 Node* main_ptr=head;
 Node* ref_ptr=head;
 while(cnt<n){
   ref_ptr=ref_ptr->next;
   cnt+=1;
 }

while(ref_ptr!=NULL){
   cout<<"d";
   main_ptr=main_ptr->next;
   ref_ptr=ref_ptr->next;
}
return main_ptr->data;
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


cout<<endl<<findNthNode(head,n);
 




}