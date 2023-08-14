#include<iostream>
using namespace std;
int bin(int x){
    int ans=0;
    int q=1;
    while(x>0){
        int y=x%10;
        ans=ans+y*q;
        q*=2;
        x/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int d=bin(n);
    cout<<d;
    return 0;
}