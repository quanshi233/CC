#include <iostream>
using namespace std;
// 构造函数的调用规则
// 1、创建一个类，C++编译器会给每个类都至少添加3个函数
// 默认构造(空实现)
// 析构函数(空实现)
// 拷贝构造(值拷贝)
// 2、
// 如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造
// 如果我们写了拷贝构造函数，编译器就不再提供其他普通构造函数了
class Person
{
public:
    Person()
    {
        cout << "Person的默认构造函数调用" << endl;
    }
    // 有参构造函数
    Person(int age)
    {
        m_Age = age;
        cout << "Person的有参构造函数调用" << endl;
    }
    // 拷贝构造函数
    Person(const Person &p)
    {
        //将传入的人身上的所有属性，拷贝到我身上
        m_Age = p.m_Age;
        cout << "Person的拷贝构造函数调用" << endl;
    }
    ~Person()
    {
        cout << "Person的析构函数调用" << endl;  
    }
    int m_Age;
};
void test01(){
    Person p1(20);
    Person p2(p1);
    cout << "age of p2 : " << p2.m_Age << endl;
}
// void test02(){
//     Person p;
// }
int main()
{
    // test01();
    // test02();
    return 0;
}