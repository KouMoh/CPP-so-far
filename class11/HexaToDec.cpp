#include<bits/stdc++.h>
using namespace std;
int hex(string x){
    int ans=0;
    int q=1;
    int s=x.size();
    for(int i=s-1;i>=0;i--){
        if(x[i]>='0'&&x[i]<='9'){
            
        ans+=q*(x[i]-'0');
        } else{
            ans+=q*(x[i]-'A'+10);
        }
        q*=16;
    }
    return ans;
}
int main(){
    string n;
    cin>>n;
    int r= hex(n);
    cout<<r;
    return 0;
}