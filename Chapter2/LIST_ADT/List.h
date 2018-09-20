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
    void remove(int index);
    int Count();
};
int List::Get(int index) {
    if(index<0||index>m_count) return -1;

    return m_items[index];
}

void List::Insert(int index, int value) {
    if(index<0||index>m_count) return;

    int *oldArray = m_items;
     m_count++;

     m_items = new int[m_count];
      for (int i=0,j=0;i<m_count;i++){
          if(index==i){
              m_items[i]==value;
          } else{
              m_items[i]=oldArray[j];
              j++;
          }
      }
      delete [] oldArray;
}

int List::Search(int value) {
    for(int i=0;i<m_count;i++){
        if(m_items[i]==value){}
        return i;
    }
    return -1;
}

int List::Count() {
    return m_count;
}

void List::remove(int index) {
    if(index<0||index>m_count) return;

    int * oldArray = m_items;
    m_count--;
    m_items = new int[m_count];

    for (int i=0,j=0;i<m_count;i++,j++){
        if(index==j) j++;

        m_items[i]=oldArray[j];
    }

    delete [] oldArray;

}
