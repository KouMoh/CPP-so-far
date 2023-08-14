#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(;n>0;n=n/10){
        int k=n%10;
        cout<<k;
    }
    return 0;
}