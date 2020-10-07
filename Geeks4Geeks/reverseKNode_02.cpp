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


Node* reverse(Node* head,int k){

 Node* cur=head;
 Node* prev=NULL;
 Node* Next;
 int cnt=0;
 while(cur!=NULL && cnt < k){
  Next=cur->next;
  cur->next=prev;
  prev=cur;
  cur=Next;
  cnt+=1;
 }

if(Next!=NULL)
   head->next=reverse(Next,k);

return prev; 

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

  int k;
  cin>>k;
  Node* head3=reverse(head,k);
  display(&head3);
  
}