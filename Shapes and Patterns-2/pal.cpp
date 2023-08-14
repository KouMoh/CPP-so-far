#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<" ";//spaces
    }
    int k=i;
    for(;j<=n;j++){
        cout<<k--<<" ";
    }
    k=2;
    for(;j<=n+i-1;j++){
        cout<<k++<<" ";
    }
    cout<<endl;
}
return 0;
}

/*for(i=1;i<=r;i++)
{
int k=i;
for(j=1;j<=(r-i);j++)
{
cout<<" ";
`
for( ;j<=r;j++)
{
cout<<k<<" ";
k--;
`
k=1;
for( ;j<(r+i);j++)
{
k++;
cout<<k<<" ";
`
for( ;j<=(2*r-1);j++)
{
cout<<" ";
`

cout<<endl;*/