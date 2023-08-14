#include<iostream>
using namespace std;
int main(){
       int n;
    int f=0;
    cout<<"Enter a number: ";
    cin>>n;
    int n1=0;
    int n2=1;
    cout<<n1<<" "<<n2<<" ";
    for(int i=2;i<=n;i++){
        int t=n2;
        n2=n1+n2;
        n1=t;
        cout<<n2<<" ";
    }
    return 0;
}