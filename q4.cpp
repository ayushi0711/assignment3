#include<iostream>
using namespace std;
int main(){
    int l,b,area,parimeter;
    cout<<"enter the length of rectangle"<<endl;
    cin>>l;
    cout<<"enter the breadth of rectangle"<<endl;
    cin>>b;
    area=l*b;
    parimeter=2*(l+b);
    if(area>parimeter){
        cout<<"area is greater"<<area<<endl;
    }
    else{
         cout<<"parimeter is greater"<<parimeter<<endl;
    }
    return 0;
}