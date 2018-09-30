////
//// Created by vidit on 20/9/18.
////
//
//#include <iostream>
//using namespace std;
//
//int main(){
////    int arr[] = {44,55,66,2,45,18};
////    for (int i=0;i< sizeof(arr)/ sizeof(*arr);i++)
////        cout<<arr[i]<<endl;
////
////    arr[1]=89;
////    arr[2]=0;
////
////    for(int i=0;i< sizeof(arr)/ sizeof(*arr);i++)
////        cout<<arr[i]<<endl;
//
//    int * ptr = new int[5]{4,7,1,2,3};
//
//    cout<<&ptr[1]<<endl;
//    cout<<*ptr<<endl;
//
//}
#include <iostream>

using namespace std;

int main()
{
    // Initialize the array length
    int arrLength = 5;

    // Initialize a pointer
    // to hold an array
    int * ptr = new int[arrLength] { 21, 47, 87, 35, 92 };

    // Display each element value
    // by incrementing the pointer (ptr++)
    cout << "Using pointer increment" << endl;
    cout << "Value\tAddress" << endl;
    while(*ptr)
    {
        cout << *ptr << "\t";
        cout << ptr << endl;
        ptr++;
    }


    // Since we have moved forward the pointer five times
    // we need to move it back
    ptr = ptr - 5;

}