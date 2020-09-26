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

  void display(Node** head){
     Node* temp=*head;
     while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
     }
  }
int  intersectPoint_hashing(Node* head1,Node* head2){
 unordered_set<Node*> st;
 while(head1!=NULL){
   st.insert(head1);
  head1=head1->next;
}
 while(head2!=NULL){
 if(st.find(head2)!=st.end()) return head2->data;
    head2=head2->next;
 }
 return -1;
}

int main(){
  cout<<intersectPoint_hashing(head,head2);
 return 0; 
}