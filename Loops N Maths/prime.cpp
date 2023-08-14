#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non-prime";
            break;
        }
    }
    if(i==n){
        cout<<"number is prime";
    }
    return 0;
}