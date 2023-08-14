#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the values of the three nummbers:";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"The greatest integer is:";
            cout<<a;
        } else{
            cout<<"The greatest integer is:";
            cout<<c;
        }
    }else{
        if(b>c){
            cout<<"The greatest integer is:";
            cout<<b;
        } else{
            cout<<"The greatest integer is:";
            cout<<c;
        }
    }
}