/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include <iostream>
using namespace std;

int main(){
    string name;
    int age,bounty,H;
    cout<< "Enter your age: ";
    cin>> age;
    if(age<=25){
        cout<<"Enter your height: ";
        cin>>H;
        if(H<180){
            if(H<100){
                cout<<"Your character = Chopper";
            }
            else{
            cout<<"Your character = Usopp";
            }
        }
        else if(H>=180){
            cout<<"Enter your bounty: ";
            cin>>bounty;
            if(bounty>1100000000){
                cout<<"Your character = Zoro";
            }
            else{
                cout<<"Your character = Sanji";
            }
        }
    }
    else{
        if(age>60){
            cout<<"Your character = Brook";
        }
        else{
            cout<<"Enter your bounty: ";
            cin>>bounty;
            if(bounty>500000000){
                cout<<"Your character = Jinbe";
            }
            else{
                cout<<"Your character = Franky";
            }
        }
    }
    return 0;
}