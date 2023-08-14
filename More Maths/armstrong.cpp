#include<iostream>
using namespace std;
int main(){
    int n;
    int f=0;
    cout<<"Enter a number: ";
    cin>>n;
    int on=n;
    for(;n>0;n=n/10){
        int k=(n%10);
        k=k*k*k;
        f=f+k;
    }
    if(f==on){
        cout<<"Armstrong number";
    } else{
        cout<<"Not";
    }
    return 0;
}