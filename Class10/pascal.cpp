#include<iostream>
using namespace std;
int fact(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    return fac;
}
int ncr(int a,int b){
    int res=fact(a)/(fact(a-b)*fact(b));
    return res;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int ans=ncr(i,j);
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}