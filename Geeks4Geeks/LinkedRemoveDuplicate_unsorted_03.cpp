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
    return;
  }
   newNode->next=*head;
   *head=newNode;
}
Node* removeDuplicates(Node* head){
  
  Node* temp=head;
  Node* prev=NULL;
  unordered_set<int> st;
  while(temp!=NULL){
   if(st.find(temp->data)!=st.end()){
    prev->next=temp->next;  
    free(temp);
    temp=prev->next;
   }
   else{
       st.insert(temp->data);
      prev=temp;
      temp=temp->next;
   }
  }
  return head;
}


void display(Node** head){
   Node* temp=*head;
   while(temp!=NULL){
     cout<<temp->data<<" ";
     temp=temp->next;
   }
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
display(&head);

head=removeDuplicates(head);
cout<<endl;
display(&head);

}