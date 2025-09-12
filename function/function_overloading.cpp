#include <iostream>
using namespace std;
//函数重载，可以让函数名相同，提高复用性

//函数重载的条件
//1.同一个作用域下
//2.函数名称相同
//3.函数参数类型不同，或者个数不同，或者顺序不同
//函数的返回值不可以作为函数重载的条件
void func(){
    cout << "func 的调用" << endl;
}
void func(int ){
    cout << "func(int) 的调用" << endl;
}
void func(double ){
    cout << "func(double) 的调用" << endl;
}
void func(int, double){
    cout << "func(int, double) 的调用" << endl;
}
void func(double, int){
    cout << "func(double, int) 的调用" << endl;
}
int main(){
    func();
    func(1);
    func(3.14);
    func(1, 3.14);
    func(3.14, 1);
}