#include <iostream>
using namespace std;
//1.引用作为重载的条件
void func(int& ){
    cout << "func(int&) 的调用" << endl;
}
void func(const int& ){
    cout << "func(const int&) 的调用" << endl;
}
//2.函数重载遇到默认参数
void func2(int a)
{
    cout << "func2(int a)的调用" << endl;
}
void func2(int a, int b = 10)
{
    cout << "func2(int a, int b=10) 的调用" << endl;
}
int main(){
    int a =10;
    func(a);
    func(10);
    func2(10);//函数重载碰到默认参数，出现二义性，报错，尽量避免这种情况。
}