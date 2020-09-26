  #include<iostream>
  #include<stack>
  using namespace std;
  class Node{
      public:
      int data;
      Node* next;
      flag=0;
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


int  intersectPoint(Node* head1,Node* head2){
 while(head1!=NULL){
   head1->flag=1;
   head1=head1->next;
}
 Node* ans=NULL;
 while(head2!=NULL){
   if(head2->flag){
        ans=head2;
        break;
     }
    head2=head2->next;
  }
 (ans==NULL)? -1 :ans->data;
}
int main(){
cout<<intersectPoint(head,head2);
return 0;
}