#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the a side"<<endl;
    cin>>a;
   
    cout<<"enter the b side"<<endl;
    cin>>b;
     cout<<"enter the c side"<<endl;
    cin>>c;

    if((a==b) &&(b==c) &&(a==c)){
        cout<<"the triangle is equilateral"<<endl;
    }
    else if(  (a==b)||  (b==c) || (a==c)){
        cout<<"the triangle is isosceles"<<endl;
    }
    else {
        cout<<"triangle is scalene"<<endl;
    }
    return 0;
}