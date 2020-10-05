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
      return;
    }
     newNode->next=*head;
     *head=newNode;
  }

  void display(Node** head){
     Node* temp=*head;
     while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
     }
  }


Node* reverseList(Node* head){

  struct Node* cur=head;
  struct Node* prev=NULL;
  struct Node* Next;
  
  while(cur!=NULL){
      Next=cur->next;
      
      cur->next=prev;
      prev=cur;
      cur=Next;
     
  }
  return prev;
  
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
  
  cout<<endl;
  head=reverseList(head);
  display(&head);

  }