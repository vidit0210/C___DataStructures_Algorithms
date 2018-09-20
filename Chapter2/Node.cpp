//
// Created by vidit on 20/9/18.
//
#include <iostream>
using namespace std;

class Node{
public:
    int value;
    Node * next;
};

void printNode(Node * node){
    while(node !=NULL){
        cout<<node->value<<endl;
        node = node->next;
    }
}





int main(){
    Node * node1 = new Node;
    Node * node2 = new Node;
    Node * node3 = new Node;
    Node * node4 = new Node;

    node1->value=6;
    node2->value=7;
    node3->value=8;
    node4->value=9;

    node1->next=node2;
    node2->next=node3;
    node3->next=node4;

    printNode(node1);




}


