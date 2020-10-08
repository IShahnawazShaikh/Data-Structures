  #include<iostream>
  #include<stack>
  using namespace std;
  class Node{
      public:
      int data;   
      Node* next;
      Node(int data){
       this->data=data;
      next=NULL;
     }
  };

  void createNode(Node** head,int data){
    Node* newNode=new Node(data);
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
Node* listRemainSorted(Node* head,int d){
 if(head==NULL)
    return NULL;
 Node* newNode=new Node(d);
 Node* temp=head;
 Node* prev=NULL;
 while(temp!=NULL){
   
  if(newNode->data<=temp->data){
      
      newNode->next=temp;
      if(prev==NULL) head=newNode;
      else prev->next=newNode;
    break;
  }
  else prev=temp;
  
  temp=temp->next;
 }
 if(temp==NULL) prev->next=newNode;
return head;
}

Node* listRemainSorted2(Node* head,int d){
 Node* newNode=new Node(d);
 if(head==NULL)
    return newNode;

 if(newNode->data < head->data){
    newNode->next=head;
    head=newNode;
    return head;
 }

 Node* temp=head;
 while(temp->next!=NULL){ 
   if(temp->next->data < newNode->data) temp=temp->next;
  
   else break;  

}
 newNode->next=temp->next;
 temp->next=newNode;
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
  int data;
  cin>>data;
  Node* modified_node2=listRemainSorted2(head,data);
  cout<<endl;
  display(&modified_node2);
  
}