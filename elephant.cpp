#include<iostream>
using namespace std;
int calculateSteps(int x,int step){
  if(x==0)
	   return step;
  else{
   if(x>=5){
	    x=x-5;
        step=step+1;
	    return calculateSteps(x,step);
    }
	 if(x>=4){
	    x=x-4;
        step=step+1;
	    return calculateSteps(x,step);
    }
	 if(x>=3){
	    x=x-3;
        step=step+1;
	    return calculateSteps(x,step);
    }
	 if(x>=2){
	    x=x-2;
        step=step+1;
	    return calculateSteps(x,step);
    }
	 if(x>=1){
	    x=x-1;
        step=step+1;
	    return calculateSteps(x,step);
    }
  }

}
int main(){
int x,step=0;
cin>>x;
int s=calculateSteps(x,step);
cout<<s;
return 0;
}