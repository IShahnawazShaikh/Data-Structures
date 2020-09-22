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
Node* removeDuplicates(Node* root){
   Node* to_free;  
   if(root==NULL)
      return root;
   if(root->next!=NULL){
    if(root->data==root->next->data){
       to_free=root->next;
       root->next=root->next->next;
       
       removeDuplicates(root);
       return root;
    }
    else{
       removeDuplicates(root->next);

       return root;

    }

   } 
   else
      return root;
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

head=removeDuplicates(head);
cout<<endl;
display(&head);

}