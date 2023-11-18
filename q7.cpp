#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the point x"<<endl;
    cin>>x;
    cout<<"enter the point y"<<endl;
    cin>>y;
  
   if( x==0 && y==0){
    cout<<"origin"<<endl;
   }
   else if(x>0 && y==0){
    cout<<"x-axis"<<endl;
   }
   else if(x==0 && y>0){
    cout<<"y-axis"<<endl;
   }
   else{
    cout<<"point does not lies on axis"<<endl;
   }
    return 0;
}