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

//C++ recurcive Version-LinearSearch

int recur_LinearSearch(vector<int> v,int low,int high,int value){
  if(low>high) return -1;
  if(v[low]==value) return low;
  return recur_LinearSearch(v,low+1,high,value);

}

int recur_binarrySearch(vector<int> x ,int low,int high,int value){
    if(low>high) return -1;
    int mid = low+((high-low)/2);

    if(x[mid]==value) return mid;
    if(value>x[mid]) {
        low = mid+1;
    }else{
        high = mid-1;
    }
    return recur_binarrySearch(x,low,high,value);
}

int binary_Search(vector<int> x,int value){
    int low =0;
    int high = sizeof(x);
    while(low<=high){
        int mid  = low+ ((high-low)/2);
        if(x[mid]==value) return mid;
        if(value>mid) {
            low = mid+1;
        } else{
            high= mid-1;
        }
    }
    return -1;
}


int main(){
    vector<int> x = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    cout<<binary_Search(x,3);
}
