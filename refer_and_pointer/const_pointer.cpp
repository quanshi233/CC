#include <iostream>
int main(){
    int a =1, b=2;
    //常量指针,指针的指向可以修改，指针指向的值不可以修改（不可执行*p1 = ？）
    const int *p1 = &a;
    p1 = &b;
    //指针常量，指针的指向不可修改，指向的值可以修改(不可执行p2= &b)
    int * const p2 =&a;
    *p2 =3;
    //const即修饰指针，又修饰常量(不可执行*p3 = ？或p3 = &a)
    const int * const p3 =&b;
    return 0; 
}