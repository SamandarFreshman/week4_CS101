//
// Created by Exam on 23/09/24.
//
#include <iostream>
using namespace std;

int main(){
    char g;
    float h;
    cin>>g>>h;
    if (g=='M'){
        if (h<1.70){
            cout<<"Short"<<endl;
        }else if (h>=1.70&&h<1.85){
            cout<<"Normal"<<endl;
        }else{
            cout<<"Tall"<<endl;
        }
    }else if (g=='F'){
        if (h<1.60){
            cout<<"Short"<<endl;
        }else if (h>=1.60&&h<1.75){
            cout<<"Normal"<<endl;
        }else{
            cout<<"Tall"<<endl;
        }
    }
    return 0;
}