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

Node* last2First(Node* head){
  
  Node* temp=head;
  Node* prev=NULL;
  while(temp->next!=NULL){
  	  prev=temp;
  	 temp=temp->next;
  }
  temp->next=head->next;
  prev->next=head;
  head->next=NULL;
  
  return temp;
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
  head=last2First(head);
  cout<<endl;
  display(&head);

  }