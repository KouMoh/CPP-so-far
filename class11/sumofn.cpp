#include<iostream>
using namespace std;
int sum(int x){
    int r=(x*(x+1))/2;
    return r;
}
int main(){
int n;
cin>>n;

int ans=sum(n);
cout<<ans;
return 0;
}