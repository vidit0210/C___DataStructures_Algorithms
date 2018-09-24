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
    if(low<high) return -1;
    int mid = low+((high+low)/2);
    if(x[mid]==value) return mid;
    if(value>x[mid]) {
        low = mid+1;
    }else{
        high = mid-1;
    }
    return recur_binarrySearch(x,low,high,value);
}




int main(){
    vector<int> x = {3,5,21,578,12,6};
    cout<<recur_LinearSearch(x,0,4,5);
}
