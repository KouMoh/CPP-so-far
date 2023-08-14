#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
      int counter=1;
      while(counter<n){    //Runs n times
        for(int i=0;i<n-1;i++){
            if(ar[i]>ar[i+1]){
                int temp = ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=temp;
            }
        }
        counter++;
      }
    for(int i=0;i<n;i++){
        cout<<ar[i];
    }
    return 0;
}