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
Node* reverse_recursive(Node* head,int k){
  if(head==NULL || head->next==NULL || k==1)
      return head;
  Node* res=reverse_recursive(head->next,--k);
  head->next->next=head;
  head->next=NULL;
  return res;
}
void revserse_k(Node* head,int k){
 Node* temp=head;
 int length=0;
 while(temp!=NULL){
   length+=1;
   temp=temp->next;
 }

if(length%k==0) length/=k;
else length=length/k+1;  

temp=head;
Node* ans_node=NULL;
Node* t2=NULL;
while(length--){
 Node* temp_main=temp;
 int cnt=1;
 while(temp_main->next!=NULL && cnt<=k){
   cnt+=1;
   cout<<endl<<temp_main->data;
   temp_main=temp_main->next;
 }

 Node* t=reverse_recursive(temp,k); 
 if(ans_node==NULL){
   ans_node=t;
   t2=t;
 }
 else t2->next=t;
while(t2->next!=NULL) t2=t2->next; 

temp=temp_main;
}
cout<<endl;
display(&ans_node);
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
  revserse_k(head,k);
}