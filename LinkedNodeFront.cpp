#include<iostream>
using namespace std;
class Node{
   public:
   	int data;
   	Node* next;
};

Node* addAtFront(Node* head,int data){
   
   //1 
   Node* n=new Node();
   
   //2
   n->data=data;
   //3
   n->next=head;
   //4
   head=n;

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
 head=addAtFront(head,20); 

 cout<<endl<<"After Entering node at front: "<<endl;
 printNode(head);




 return 0;
}