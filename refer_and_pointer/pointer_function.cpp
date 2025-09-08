#include <iostream>
void swap(int *, int*);
int main(){
    using namespace std;
    int a = 10;
    int b = 20;
    cout << "a = " << a << endl
         << "b = " << b << endl;
    swap (&a, &b);
    cout << "After swap: "<< endl;
    cout << "a = " << a << endl
         << "b = " << b << endl;
}
void swap(int*p1, int*p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    return;
}