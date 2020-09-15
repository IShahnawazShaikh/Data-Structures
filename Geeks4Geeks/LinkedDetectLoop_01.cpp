#include<iostream>
#include<unordered_set>
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

bool detectLoop(Node* head){
  unordered_set<Node*> s;
  while(head!=NULL){
     if(s.find(head)!=s.end())
        return true;
     s.insert(head);
     head=head->next;
  }
  return false;
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

 // head->next->next->next=head;   To allow Loop exist


detectLoop(head) ? cout<<"Loop exist:"<<endl : cout<<"Not exist: ";   





}