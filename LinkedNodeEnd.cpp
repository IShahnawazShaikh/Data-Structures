#include<iostream>
using namespace std;
class Node{
   public:
   	int data;
   	Node* next;
};

Node* addAtEnd(Node* head,int data){
   Node* temp=head;

   //1 
   Node* newNode=new Node();
   
   //2
  newNode->data=data;
  newNode->next=NULL;

   //3
   while(temp->next!=NULL)
      temp=temp->next; 
   //4
   temp->next=newNode; 


   return head;
}

void printNode(Node* n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}

int main(){
 Node* head=NULL;
 Node* first=NULL;
 Node* second=NULL;
 head =new Node();
 first =new Node();
 second =new Node();
 
 head->data=10;
 head->next=first;
 
 first->data=11;
 first->next=second;

 second->data=12;
 second->next=NULL;

 cout<<"Before Entering a node: "<<endl;
 printNode(head);
 head=addAtEnd(head,20); 

 cout<<endl<<"After Entering node at End: "<<endl;
 printNode(head);




 return 0;
}