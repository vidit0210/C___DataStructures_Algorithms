//
// Created by vidit on 20/9/18.
//

// linear search

#include<iostream>
#include <vector>

using namespace std;

int value(vector<int> arr,int val){
    for (int i =0;i< sizeof(arr);i++){
        if(arr[i]==val){
            return i;
        }


    }
    return -1;
}
int main(){
    vector<int> x = {3,5,21,578,12,6};
    cout<<value(x,121324);
}