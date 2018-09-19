//
// Created by vidit on 19/9/18.
//

// Switch Statements

#include<iostream>
using namespace std;
int main(){
    int i=3,a=3,b=6;
    switch(i){
        case 1:cout<<a+b;
            break;
        case 2:cout<<a-b;
        break;
        case 3: cout<<a*b;
        break;
        case 4:cout<<a/b;
            break;
        default:cout<<"No Valid choice Entered";
    }
}