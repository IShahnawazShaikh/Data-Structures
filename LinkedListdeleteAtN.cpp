#include<iostream>
using namespace std;
class Node{
    public:
	int data;
    Node* next;
};
Node* head=NULL;
void createNode(int data){
	Node* newNode=new Node();
    newNode->data=data;
	if(head==NULL){
		head=newNode;
		return;
	}
   newNode->next=head;
   head=newNode;
}

Node* deleteNode(Node* head,int pos){
  if(pos==1){
  	 head=head->next;
  	 return head; 
  }
  Node* temp=head;
  Node* prev=NULL;
  pos-=1;
  while(pos){
  	pos-=1; 
    prev=temp;
    temp=temp->next;
  }
 
 prev->next=temp->next;
 free(temp);
 return head;
}



void pirntList(Node* head){
	while(head!=NULL){
		 cout<<head->data<<" ";
		 head=head->next;
	}
	cout<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
int data;	
cin>>data;
createNode(data);
}

pirntList(head);
int del_pos;
cin>>del_pos;

head=deleteNode(head,del_pos);
cout<<endl;
pirntList(head);


}