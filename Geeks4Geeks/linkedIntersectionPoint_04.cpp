#include<iostream>
int  intersectPoint(Node* head1,Node* head2){
 stack<Node*> st1;
 stack<Node*> st2;
 while(head1!=NULL){
   st1.push(head1);
  head1=head1->next;
}
 while(head2!=NULL){
    st2.push(head2);
    head2=head2->next;
 }
 Node* ans=NULL;
 while(!st1.empty() && !st2.empty()){
     if(st1.top()==st2.top())
         ans=st1.top();
    else
       break;
    st1.pop();   
    st2.pop();   
 }
 return (ans==NULL) ? -1 : ans->data;
}

int main(){
  cout<<intersectPoint(head,head2);
 return 0; 
}