#include "my_function.h"
void swap(int a, int b){
    cout << "a = " << a << endl
         << "b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl
     << "b = " << b << endl;
    return;
}