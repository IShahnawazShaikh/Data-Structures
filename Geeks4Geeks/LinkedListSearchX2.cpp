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
bool searchXIterative(Node** head,int x){
   Node* temp=*head;
   while(temp!=NULL){
     if(temp->data==x)
     	return true;
    temp=temp->next; 
   }
   return false;
}
bool searchXRecursive(Node** head,int x){
  if((*head)==NULL)
  	  return false;
  else
     if((*head)->data==x)
         return true;
      else
        return searchXRecursive(&(*head)->next,x);
}


int main(){
int T;
cin>>T;
while(T--){
int data;	
cin>>data;
createNode(data);
}
int data;
cin>>data;
searchXIterative(&head,data) ? cout<<"Present"<<endl : cout<<"Not present"<<endl; 

searchXRecursive(&head,data) ? cout<<"Present" : cout<<"Not present"; 
return 0;
}
