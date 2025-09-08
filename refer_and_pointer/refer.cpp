#include <iostream>
int main(){
    using namespace std;
    int a = 123, b=321;
    int *p1 = &a, &re_a = a;
    int *p2 = &re_a;
    int *p3 = &b, &re_b = *p3;
    cout << *p1 <<endl << *p2 <<endl << *p3 <<endl
         << p1 <<endl <<p2 <<endl <<p3 <<endl
         <<re_a <<endl <<re_b <<endl <<&re_a <<endl <<&re_b <<endl;
    double c = 456;
    double *p4 = &c;     
    cout << c << endl
         << p4 << endl
         << &p1 << endl << &p2 << endl << &p3 << endl << &p4 << endl
         << *(&p1) << endl;
    
    int *p5 = NULL;
    cout << p5;
    //野指针
    int *p6 = (int*)0x1100;
    return 0;  
}