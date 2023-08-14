#include<iostream>
using namespace std;
int main(){
    int n;
    int o;
    cin>>o;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    for(int i=0;i<n;i++){
       if(a[i]==o){
        o=i;
       }
    }
    cout<<o+1;
    return 0;
}