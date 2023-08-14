#include<iostream>
using namespace std;

int binary(int ar[],int n,int key){
	int s=0;
	int e=n;
	while(s<=e){
		int mid=(s+e)/2;// index od mid;
		if(ar[mid]==key){
			return mid;
		} else if(ar[mid]>key){
			e=mid-1;// obviously, as mid > key;
		}
		else{
			s=mid+1;// mid<key, so updated mid
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	int key;
	cin>>key;
cout<<binary(ar,n,key);

}

/* Time complexity
1st iteration-> n
2nd iteration-> n/2
3rd iteration-> (n/2)/2
after k iterations -> n/2^k

let n/2^k=1
k=logn base 2

O(k)

lesser complexity than linear search

*/