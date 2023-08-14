#include<iostream>
using namespace std;
int main(){
    int n;
    int f=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            f=0;
            break;
        } else{
            f++;
        }
    }
    if(f>0){
        cout<<"The number is a prime number";
    } else{
        cout<<"The number is a non-prime number";
    }
    return 0;
}