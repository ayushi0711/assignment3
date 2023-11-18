#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the marks of student a"<<endl;
    cin>>a;
    cout<<"enter the marks of student b"<<endl;
    cin>>b;
    cout<<"enter the marks of student c"<<endl;
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"a has greatest marks"<<endl;
        }
        else{
            cout<<"c has greatest marks"<<endl;
        }

    }else{
        cout<<"b has greatest marks"<<endl;
    }
    return 0;
}