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

void alternateNode(Node* head){
  stack<Node*> even;
  stack<Node*> odd;
  Node *ansNode=NULL;

   Node* temp=head;
  while(temp!=NULL){

   if(temp->data&1) odd.push(temp);
   else even.push(temp);
   temp=temp->next; 
  } 
  
 int k=1;
 bool st=true;
 int n=even.size()+odd.size();
 while(k <=n){
 
  
  if(st){
   // cout<<endl<<"if: "<<even.top()->data;
    if(ansNode==NULL) ansNode=even.top();
    else{
    Node* t=even.top();
    t->next=ansNode;
    ansNode=t;
    }
    even.pop();
    //cout<<endl<<"even size: "<<even.size();
    st=!st;
  } 
  else{
    //cout<<endl<<"else: "<<odd.top()->data;
    Node* t=odd.top();
    t->next=ansNode;
    ansNode=t;
    odd.pop();
    //cout<<endl<<"odd size: "<<odd.size();
    st=!st;
  }
  k+=1;
 }
 cout<<endl;
 display(&ansNode);
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

  alternateNode(head);
  
}