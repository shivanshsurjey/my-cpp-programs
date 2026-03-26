#include<iostream>
using namespace std;

int main(){

    char x;
    cout<<"Enter a letter : ";
    cin>>x;
    if(97<=x && 122<='z'){
        cout<<"lowercase";
    }else{
        cout<<"uppercase";
    }
    
     return 0;
}