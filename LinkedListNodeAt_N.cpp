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
bool insertAtPos(int pos,int data){
	if(pos==1){
		createNode(data);
		return true;
	}

	pos-=1;
	Node* prev=NULL;
	Node* temp=head;
	while(pos){
		if(temp!=NULL){
           prev=temp;
           temp=temp->next;
		}
		else
          return false;
		pos-=1;
	}
    Node* newNode=new Node();
    newNode->data=data;
	prev->next=newNode;
	newNode->next=temp;
	temp=NULL;
	prev=NULL;
	return true;
}


void pirntList(Node* head){
	while(head!=NULL){
		 cout<<head->data<<" ";
		 head=head->next;
	}
	cout<<endl;
}
int main(){
createNode(1);
createNode(2);
createNode(3);
createNode(4);
cout<<"Initial List:"<<endl;
pirntList(head);


if(insertAtPos(3,20)){
	cout<<endl<<"Node is inserted at 3, New List: "<<endl;
    pirntList(head);
}
else
   cout<<endl<<"Node cannot be inserted at 3"<<endl;


if(insertAtPos(1,21)){
    cout<<endl<<"Node is inserted at 1, New List: "<<endl;
    pirntList(head);
}
else
   cout<<endl<<"Node cannot be inserted at 1"<<endl;





if(insertAtPos(7,22)){
    cout<<endl<<"Node is inserted at 7, New List: "<<endl;
    pirntList(head);
}
else
   cout<<endl<<"Node cannot be inserted at 7"<<endl;




if(insertAtPos(10,23)){
    cout<<endl<<"Node is inserted at 10, New List: "<<endl;
    pirntList(head);
}
else
   cout<<endl<<"Node cannot be inserted at 10"<<endl;

}