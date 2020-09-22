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

Node* pairwiseSwap(Node* head){
  if(head==NULL || head->next==NULL) return head;
   
   Node* rem=head->next->next;
   Node* newNode=head->next;
   head->next->next=head;

   head->next=pairwiseSwap(rem);
   return newNode;
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

  head=pairwiseSwap(head);
  cout<<endl;
  display(&head);
 
  }