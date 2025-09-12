#include <iostream>
using namespace std;
void mySwap01(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "swap01 a = " << a << endl
         << "swap01 b = " << b << endl;
    return;
}
void mySwap02(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "swap01 a = " << *a << endl
     << "swap01 b = " << *b << endl;
    return;
}
void mySwap03(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    cout << "swap01 a = " << a << endl
         << "swap01 b = " << b << endl;
    return;
}
int main(){
    int a = 10, b =20;
    mySwap03(a, b);
    cout << "a = " << a << endl
         << "b = " << b << endl;
    return 0;
}