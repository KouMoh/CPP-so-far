#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the length of rhombus: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
    }
    for(int k=1;k<=n;k++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}