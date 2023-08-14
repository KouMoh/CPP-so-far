#include<iostream>
using namespace std;
int main(){
    int n;
    int f=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(;n>0;n=n/10){
        int k=n%10;
        f=f*10+k;
    }
    cout<<f;
    return 0;
}