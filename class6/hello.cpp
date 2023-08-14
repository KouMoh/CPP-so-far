#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Enter a button:";
    cin>>button;
    switch(button){
        case 'a':
        cout<<"Hello\n";
        break;

            case 'b':
        cout<<"Namaskar\n";
        break;

            case 'c':
        cout<<"Namaste\n";
        break;

            case 'd':
        cout<<"Oi!!\n";
        break;

            case 'e':
        cout<<"Salut\n";
        break;

            case 'f':
        cout<<"K bruh...\n";
        break;
        default:
        cout<<"I'm still learning more\n";
        break;
    }
    return 0;
}