#include<iostream>
using namespace std;
int main(){
int i,j,mat[5][5];
bool status=true;
for(i=0;i<5;i++)
	 for(j=0;j<5;j++)
	    cin>>mat[i][j];
for(i=0;i<5;i++){
	 for(j=0;j<5;j++){
	    if(mat[i][j]==1){
			status=false;
            break;
		}
	 }
	 if(status==false)
		 break;
}
cout<<abs(i-2)+abs(j-2);
return 0;
}
