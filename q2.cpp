#include<iostream>
using namespace std;
int main(){
    int r,area, circumference;
    cout<<"enter the radius of circle"<<endl;
    cin>>r;
     area=3.14*r*r;
    
     circumference=2*3.14*r;
     if(area>circumference){
        cout<<"area is larger"<<area<<endl;
     }
     else{
        cout<<"area is smaller"<<circumference<<endl;
     }
     return 0;
}