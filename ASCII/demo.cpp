#include<iostream>
using namespace std;
int main(){
    // used for ascending order or descending
    // selection sort. FInd the minimum element and swap in the beginning
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[minIndex]){
            minIndex=j;
            }

        }
     int temp=ar[i];
     ar[i]=ar[minIndex];
     ar[minIndex]=temp;;
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}