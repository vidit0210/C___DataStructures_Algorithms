//
// Created by vidit on 20/9/18.
//


//Polynomial Multiplication

#include<iostream>
#include <vector>
using namespace std;

vector<int> calc_poly(vector<int> a,vector<int> b,int n){
    int size = 2*n-1;
    vector<int> product(size);
    for (int i=0;i<size;i++){
        product[i]=0;
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            product[i+j]=product[i+j]  + (a[i]*b[j]);
        }
    }
    return product;
}
int main(){
    vector<int> a = {3,4};
    vector<int> b = {1,2};
    vector<int> c=calc_poly(a,b,2);

    for(int i=0;i< c.size();i++){
        cout<<c[i]<<endl;
        cout<<"\t";
    }



}