#include<iostream>
using namespace std;
int main(){
   int n;
    int f=1;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=n;i>0;i--){
        f=f*i;
    }
    cout<<f;
    return 0;
}