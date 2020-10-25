#include<iostream>
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
int countPairs(Node* first,Node* second, int value) { 
	//cout<<endl<<first->data<<" "<<value;
	int count = 0; 
	while (first != NULL && second != NULL && 
		first != second && second->next != first) { 

		if ((first->data + second->data) == value) { 
			cout<<endl<<"if: "<<first->data<<" "<<second->data;
			first = first->next; 
			second = second->prev; 
			count+=1;

		} 
		else if ((first->data + second->data) > value) 
			second = second->prev; 
		else
			first = first->next; 
	}
	//cout<<endl<<count;  
	return count; 

} 
int countTriplets(Node* head, int x) { 
	if (head == NULL) 
		return 0; 

	Node* current, *first, *last; 
	int count = 0; 
	last = head; 
	while (last->next != NULL) last = last->next; 
	for (current = head; current != NULL; current = current->next) { 
		first = current->next; 
		cout<<endl<<"Current: "<<current->data;
		if(current->next!=NULL)
		   count += countPairs(first, last, x - current->data); 
	} 
	return count; 
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
cout<<endl<<countTriplets(head,17);

return 0;	
}
