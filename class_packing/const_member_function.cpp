#include <iostream>
using namespace std;

//常函数

class Person
{
public:
    //this指针的本质    是指针常量Person* const this  指针的指向是不可以修改的
    //const Person * const this
    //在成员函数后面加const,修饰的是this指针,让指针指向的值也不可以修改
    void showPerson() const
    {   
        //m_A = 100;
        m_B = 100;
    }
    void func()
    {

    }

    int m_A;
    mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值
};

//常对象
void test01()
{
    const Person p{};// 在对象前加const,变为常对象
    //p.m_A = 100;
    p.m_B = 100;//m_B是特殊值，在常对象下也可以修改
    cout << p.m_B << endl;
    //常对象只能调用常函数
    p.showPerson();
    //p.func(); //常对象 不可以调用普通成员函数，因为普通成员函数可以修改属性
}

int main()
{
    test01();
    return 0;
}
