//
// Created by vidit on 19/9/18.
//

//Polymorphishm

#include <iostream>
#include <string>
using namespace std;
class Animal{
string m_name;
public:

    Animal(string name){
        m_name=name;
    }
    string getName(){
        return m_name;
    }

    virtual string makeSound()=0;
};

class Dog:public Animal{
private:
    string m_gender;
public:
    Dog(string name,string gender):Animal(name){
        m_gender=gender;
    }
    string makeSound() override {
        return "Woof-woof";
    }
    string getGender(){
        return m_gender;
    }
};

int main(){
    Dog d = Dog("Tom","M");
    cout<<d.getName()<<endl<<d.makeSound()<<d.getGender();
}
