//
// Created by vidit on 20/9/18.
//

#ifndef C_DATASTRUCTURES_ALGORITHMS_LIST_H
#define C_DATASTRUCTURES_ALGORITHMS_LIST_H

#endif //C_DATASTRUCTURES_ALGORITHMS_LIST_H

#include <iostream>
using namespace std;

class List{
    int m_count;
    int * m_items;
public:
    List();
    ~List();
    int Get(int index);
    void Insert(int index,int value);
    int Search(int value);
    void Remove(int index);
    int Count();
};
List::List() {
    m_count=0;
}
List::~List() {
    delete [] m_items;
    m_items=NULL;
}

int List::Get(int index) {
    if(index<0||index>m_count) return -1;
    return m_items[index];

}

void List::Insert(int index, int value) {
    if(index<0||index>m_count) return;

    int * OldArray = m_items;
    m_count++;

    m_items = new int[m_count];

    for (int i=0,j=0;i<m_count;i++){
        if(index==i){
            m_items[i]=value;
        } else{
            m_items[i]=OldArray[j];
            j++;
        }
    }

    delete [] OldArray;

}
int List::Search(int value) {
    for(int i=0;i<m_count;i++){
        if(m_items[i]==value){
            return i;
        }
    }
    return -1;
}
void List::Remove(int index) {
    if(index<0||index>m_count) return;
    int * OldArray = m_items;
    m_count--;
    m_items = new int[m_count];
    for(int i=0,j=0;i<m_count;i++,j++){
        if(index==i){
            j++;
        } else{
            m_items[i]=OldArray[j];
        }
    }

    delete [] OldArray;

}
int List::Count() {
    return m_count;
}
