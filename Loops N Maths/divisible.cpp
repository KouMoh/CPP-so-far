#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
int a;
cin>>a;
int n=0;
for(int i=0;i<=a+1;i++){
    if(a==i){
        n=n+a;
        continue;
    }
    cout<<a<<"x"<<i<<"="<<n<<endl;
    n=n+a;
}
}