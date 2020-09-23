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

Node* sortedIntersect(Node* a,Node* b) { 
    if (a == NULL || b == NULL) 
        return NULL; 
    if (a->data < b->data) 
        return sortedIntersect(a->next, b); 
  
    if (a->data > b->data) 
        return sortedIntersect(a, b->next); 
Node* temp = new Node();
    temp->data = a->data; 
  
    temp->next = sortedIntersect(a->next, b->next); 
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

  Node* head3=sortedIntersect(head,head2);
  cout<<endl;
  display(&head3);

  }