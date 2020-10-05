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


void reverseList(Node* head){
 
 if(head==NULL){
     return;
}
reverseList(head->next);
 cout<<head->data<<" "; 
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
  //display(&head);
  
  cout<<endl;
  reverseList(head);
  //display(&head);

  }