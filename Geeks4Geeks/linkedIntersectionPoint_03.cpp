#include<iostream>
int  intersectPoint(Node* head1,Node* head2){
 int h1=0,h2=0;
 Node* temp=head1;
 while(temp!=NULL){
     h1+=1;
    temp=temp->next;
     
 }
 temp=head2;
 while(temp!=NULL){
     h2+=1;
    temp=temp->next;
 }    
 Node* temp2=NULL;
 if(max(h1,h2)==h1){
    temp=head1;
    temp2=head2;
 }
 else{
    temp=head2;
    temp2=head1;
 }
 int d=abs(h1-h2);
 while(d--)
    temp=temp->next;
d=-1;    
 while(temp!=NULL && temp2!=NULL){
     if(temp==temp2){
        d=temp->data;
        break;
     }
    temp=temp->next;    
    temp2=temp2->next;    
 }
 
 return d;
}

int main(){
  cout<<intersectPoint_hashing(head,head2);
 return 0; 
}