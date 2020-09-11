#include<iostream>
using namespace std;
class Node{
   public:
   	int data;
   	Node* next;
};

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

 printNode(head);

 return 0;
}