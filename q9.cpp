#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
      cout<<"character"<<endl;

    }
    else if(ch>='0' && ch<='9'){
        cout<<"digit"<<endl;

    }
    else{
        cout<<"special Character"<<endl;
    }
    return 0;
}