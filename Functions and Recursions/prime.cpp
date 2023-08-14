#include<iostream>
#include<math.h>
using namespace std;
bool Prime(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main(){
cout<<"Enter 2 numbers, with a space: ";
int n1,n2;
cin>>n1>>n2;
for(int i=n1+1;i<n2;i++){
    if(Prime(i)){
        cout<<i<<endl;
    }
}
return 0;
}
