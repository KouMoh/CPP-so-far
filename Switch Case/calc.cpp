#include<iostream>
using namespace std;
int main(){
    cout<<"Enter two numbers: ";
    int n1,n2;
    cin>>n1>>n2;
    cout<<"Enter the operator: ";
    char o;
    cin>>o;
    switch(o){
        case '+':
        cout<<n1+n2;
        break;

                case '-':
        cout<<n1-n2;
        break;

                case 'x':
        cout<<n1*n2;
        break;
        
        
        case '/':
        cout<<n1/n2;
        break;

        
        
    }
    return 0;
}