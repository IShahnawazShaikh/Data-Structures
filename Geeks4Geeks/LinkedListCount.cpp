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
int countIterative(Node* head){
  int cnt=0;
  Node* temp=head;
	while(temp!=NULL){
		 cnt+=1;
		 temp=temp->next;
	}
  return cnt;
}
int countRecursive(Node* head){
 if(head==NULL)
     return 0;
  else{
    head=head->next;
    return 1+countRecursive(head);
  }
     

}

int main(){
int T;
cin>>T;
while(T--){
int data;	
cin>>data;
createNode(data);
}

cout<<countIterative(head);
cout<<endl<<countRecursive(head);


}