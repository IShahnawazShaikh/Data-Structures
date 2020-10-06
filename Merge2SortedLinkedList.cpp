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

Node* mergeLinkedList(Node* head1,Node* head2){
Node* head3=NULL;
Node* ans=NULL;
while(head1!=NULL && head2!=NULL){
  if(head1->data <= head2->data){
    ans=head1;
    head1=head1->next;

  }
  else{
    ans=head2;
    head2=head2->next;
  }
  if(head3==NULL){
    head3=ans;
    head3->next=NULL;

  }
else{
   ans->next=head3;
   head3=ans;
 }  
}

if(head1==NULL && head2==NULL)
    return head3;
 else{
   Node* temp=NULL;
   if(head1==NULL) temp=head2;
   else temp=head1;
   while(temp!=NULL){
     
     Node* t=temp->next;
     temp->next=head3;
     head3=temp;
     temp=t;
   }
 }

// display(&head3);
 return head3;

}
int main(){
int T;
cin>>T;
Node* head=NULL;
Node* head2=NULL;
while(T--){
int data; 
  cin>>data;
  createNode(&head,data);
  }
  display(&head);
  cout<<endl;
  int T2;
  cin>>T2;
  while(T2--){
  int data; 
  cin>>data;
  createNode(&head2,data);
  }
  display(&head2);
  cout<<endl;
  Node* head3=mergeLinkedList(head,head2);
  display(&head3);
  return 0;
}