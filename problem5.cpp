//
// Created by Exam on 23/09/24.
//
#include <iostream>
using namespace std;

int main(){
    float a,b;
    char o;
    cin>>a>>o>>b;
    switch (o) {
        case '+':
            cout<<(a+b)<<endl;
            break;
        case '=':
            cout<<(a-b)<<endl;
            break;
        case '/':
            cout<<float(a/b)<<endl;
            break;
        case '*':
            cout<<(a*b)<<endl;
            break;
    }
    return 0;
}