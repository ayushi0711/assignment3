#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3,slop1,slop2;
    cout<<"enter the point x1"<<endl;
    cin>>x1;
    cout<<"enter the point x2"<<endl;
    cin>>x2;
        cout<<"enter the point x3"<<endl;
    cin>>x3;
        cout<<"enter the point y1"<<endl;
    cin>>y1;
    cout<<"enter the point y2"<<endl;
    cin>>y2;
        cout<<"enter the point y3"<<endl;
    cin>>y3;
  
  slop1=(y2-y1)/(x2-x1);
  slop2=(y3-y2)/(x3-x2);
  if(slop1==slop2){
    cout<<"all three points are on straight line"<<endl;
  }
  else{
    cout<<"all points are not on straight line"<<endl;
  }
    return 0;
}