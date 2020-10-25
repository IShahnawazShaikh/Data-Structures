#include<iostream>
#include<unordered_map>
using namespace std;

class Node{
 public:
 Node* prev;
 Node* next;
 int data;
 Node(int data){
 this->data=data;
  prev=NULL;
  next=NULL;
 }
};

void createNodeFront(Node** head,int data){
 Node* new_node=new Node(data);
 
 if(*head==NULL){
  *head=new_node;
  return;
 }

 new_node->next=*head;
 (*head)->prev=new_node;
 *head=new_node;

}
void display(Node** head){
 
  Node* temp=*head;
  while(temp!=NULL){
  	cout<<temp->data<<" ";
  	temp=temp->next;
  }
}
int tripletSumX(Node* head,int x){

unordered_map<int,Node*> mp;
Node* curr=head;
while(curr!=NULL) {
  mp[curr->data]=curr;
  curr=curr->next;
}
Node* p1=NULL;
Node* p2=NULL;
int cnt=0;
for(p1=head;p1!=NULL;p1=p1->next){
  for(p2=p1->next;p2!=NULL;p2=p2->next){

   int p_sum=p1->data+p2->data;
   if(mp.find(x-p_sum)!=mp.end() && mp[x-p_sum]!=p1 && mp[x-p_sum]!=p2){

    cnt+=1;
    cout<<endl<<"pair: "<<p1->data<<" "<<p2->data<<" "<<x-p_sum; 
   }

  }
}

return cnt/3;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);	

Node* head=NULL;


int t;
cin>>t;
while(t--){
 int data;
 cin>>data;
 createNodeFront(&head,data);

}

display(&head);
cout<<endl;
int x;
cin>>x;
int count=tripletSumX(head,x);
cout<<endl<<"Number of Pair: "<<count;

return 0;	
}