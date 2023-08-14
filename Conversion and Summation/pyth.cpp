#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(int x,int y,int z){
    int a=max(x,max(y,z));
    int b;
    int c;
    if(a==x){
        b=y;
        c=z;
    } 
    if(a==y){
        b=x;
        c=z;
    }
    if(a==z){
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c){
        return true;
    } else{
        return false;
    }
}
int main(){
int a,b,c;
cin>>a>>b>>c;
if(check(a,b,c)){
    cout<<"Pythagorean Triplet";
} else{
    cout<<"It's not a pythagorean triplet";
}
return 0;
}