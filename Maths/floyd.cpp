#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of lines: ";
    int k=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}