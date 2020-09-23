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

Node* h3=NULL;
Node* findIntersection_recursive(Node* h1,Node* h2){
  if(h1==NULL || h2==NULL)
       return h3;
   if(h1->data==h2->data){
     createNode(&h3,h1->data);
     h1=h1->next;
     h2=h2->next;
   }
   else if(h1->data < h2->data)
       h1=h1->next;
   else
      h2=h2->next;
   return  findIntersection_recursive(h1,h2);
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

  Node* head3=findIntersection_recursive(head,head2);
  cout<<endl;
  display(&head3);

  }