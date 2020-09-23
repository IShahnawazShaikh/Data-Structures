  #include<iostream>
  #include<map>
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
    Node* temp=*head;
    while(temp->next!=NULL)
       temp=temp->next;
     temp->next=newNode;
  }

Node* findIntersection(Node* h1,Node* h2){
  
  Node* h3;
 while(h1!=NULL && h2!= NULL){

   if(h1->data==h2->data){
     createNode(&h3,h1->data);
      h1=h1->next;
      h2=h2->next;
   }
   else if(h1->data < h2->data)
       h1=h1->next;
   else
      h2=h2->next;  

 }
return h3;
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
  int data2;
  cin>>data2;
  createNode(&head2,data2);
  }

  display(&head2);

  Node* head3=findIntersection(head,head2);
  cout<<endl;
  display(&head3);

  }