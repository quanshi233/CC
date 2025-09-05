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
         
    cout << c << endl;
    return 0;  
}