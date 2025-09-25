#include <iostream>
using namespace std;
void test01(){
    int *p = new int(10);
    cout << p << endl
         << *p << endl;
    *p =20;
    cout << p << endl
         << *p << endl;
    delete p;
    cout << p << endl
         << *p << endl;
    return;
}
void test02(){
    int *arr = new int[10];
    for(int i=0; i<10; i++){
        arr[i] = i*2;
    }
    cout << arr << endl
         << *arr << endl;
    for(int i=0; i<10; i++){
        cout << &arr[i] << endl
             << arr[i] << endl;
    }
    delete [] arr;
    for(int i=0; i<10; i++){
        cout <<"arr[" << i << "] : " << endl
             << &arr[i] << endl
             << arr[i] << endl;
    }
    return;
}
int main(){
    test01();
    return 0;
}