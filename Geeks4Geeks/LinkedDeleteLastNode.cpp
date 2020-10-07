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

Node* deleteLastNode(Node* head){
 if(head==NULL)
    return NULL;

 Node* temp=head;
 while(temp->next->next!=NULL) temp=temp->next;

 free(temp->next);
 temp->next=NULL;
 return head;

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
  Node* ans=deleteLastNode(head);
  display(&ans);
  
}