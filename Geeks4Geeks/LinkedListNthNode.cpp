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
int GetNth(Node* head,int x){
	Node* temp=head;
	x-=1;
	while(x){
		temp=temp->next;
		if(temp==NULL)
			return 0;
		x-=1;
	}
	return temp->data;

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
int pos;
cin>>pos;
cout<<GetNth(head,pos);    



}