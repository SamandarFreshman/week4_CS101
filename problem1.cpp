//
// Created by Exam on 23/09/24.
//
#include <iostream>
using namespace std;

int main(){
    long int in;
    cin>>in;
    if (in >= -2147483647&&in<=2147483647){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}