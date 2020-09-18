#include<iostream>
#include<stack>
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
    newNode->next=NULL;
    return;
  }
   newNode->next=*head;
   *head=newNode;
}

bool isPalindrome(Node* head){
 Node* temp=head;
 stack<int> st;
 while(temp!=NULL){
  st.push(temp->data);
  temp=temp->data; 
}  

temp=head;

while(temp!=NULL){
 if(st.top()!=temp->data)
    return false;
 temp=temp->next;
 st.pop();
}
return true;
}


void pirntList(Node** head){
  Node* temp=*head;
  while(temp!=NULL){
     cout<<temp->data<<" ";
      temp=temp->next;
  }
  cout<<endl;
}
int main(){
Node* head=NULL;
int T;
cin>>T;
while(T--){
int data; 
cin>>data;
createNode(&head,data);
}

pirntList(&head);

cout<<isPalindrome(head);
}