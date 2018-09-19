//
// Created by vidit on 19/9/18.
//

#include <iostream>

using namespace std;

class Animal{
    string m_name;
public:
    void setName(string name){
        m_name=name;
    }
    string getName(){
        return m_name;
    }

};

int main(){
    Animal dog;
    dog.setName("Tom");
    cout<<dog.getName();
    return 0;
}