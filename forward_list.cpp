#include<iostream> 
#include<forward_list> 
using namespace std; 
int main() { 
	forward_list<char> flist = {'a','c','d'}; 
	flist.remove('a'); 
	cout << "The forward list after remove operation : "; 
	for (char &c : flist) 
		cout << c << " "; 
	cout << endl; 
	flist.remove_if([](int x){
		return (x=='c' & x=='b');
	}); 
	
	// Displaying the forward list 
	cout << "The forward list after remove_if operation : "; 
	for (char &c : flist) 
	cout << c << " "; 
	cout << endl; 

	return 0; 

} 
