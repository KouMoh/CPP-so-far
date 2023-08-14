#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of lines: ";
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}