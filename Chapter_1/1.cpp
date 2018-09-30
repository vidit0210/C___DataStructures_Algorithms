//
// Created by vidit on 19/9/18.
//

#include <iostream>
#include <vector>

using namespace std;
vector<int> multiPoly(vector<int> a ,vector<int> b,int n){
    int size = 2*n -1;
    vector<int> product(size);
    for(int i=0;i<size;i++){
        product[i]=0;
    }
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++){
            product[i+j]=product[i+j]+a[i]*b[j];
        }
    }
    return product;
}

int main(){
    vector<int> a = {3,4};
    vector<int> b = {1,2};
    vector<int> c =multiPoly(a,b,2);
    for(int i=0;i<c.size();i++){
        cout<<c[i];
    }

}

