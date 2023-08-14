#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int a;
    cin>>a;
    cout<<"Enter a 2nd number: ";
    int b;
    cin>>b;
    for(int num=a;num<b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
                   if(i==num){
                cout<<num<<endl;
            }
    }
    return 0;
}