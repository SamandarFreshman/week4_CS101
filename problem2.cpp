//
// Created by Exam on 23/09/24.
//
#include <iostream>
using namespace std;

int main(){
    bool w,r;
    cin>>w>>r;
    if (w){
        cout<<"Bus"<<endl;
    }else{
        if (r){
            cout<<"Walk"<<endl;
        }else{
            cout<<"Bike"<<endl;
        }
    }
    return 0;
}