#include <iostream>
int main(){
    using namespace std;
    int a = 123;
    int *p1 = &a, *p2 = p1, *p3 = nullptr;
    int *p4 = 0;
    int *p5;
    p5 = p2;
    cout << p1 <<endl <<p2 <<endl <<p3 <<endl
         << *p1 <<endl <<*p2 <<endl <<&a << endl
         << p4 <<endl
         << *p5 <<endl;
    *p5 = 23;
    cout << *p1;
    return 0;
}