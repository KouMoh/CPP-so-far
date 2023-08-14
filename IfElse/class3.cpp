#include<iostream>
using namespace std;
int main(){
    int savings;
    cout<<"Enter the amount of savings:";
    cin>>savings;
    if(savings>5000){
        if(savings>10000){
            cout<<"Roadtrip with Keerthy";
        } else{
            cout<<"Shopping with Keerthy";
        }
    } else{
        if(savings>2000){
            cout<<"Samantha";
        } else{
            cout<<"Swata";
        }

    }
}