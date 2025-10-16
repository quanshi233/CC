#include <iostream>
using namespace std;

class MyInteger
{
    friend ostream& operator<<(ostream& cout, MyInteger& myint);
public:
    MyInteger()
    {
        m_Num = 0;
    }
    //重载前置++运算符
    MyInteger& operator++()
    {
        m_Num++;
        return *this;//返回引用是为了一直对一个数据进行操作
    }

    //重载后置++运算符
    int operator++(int) //int代表占位参数，可以用于区分前置和后置递增
    {
        MyInteger temp = *this;
        m_Num++;
        return temp.m_Num;
    }
private:
    int m_Num;
};

ostream& operator<<(ostream& cout, MyInteger& myint)
{
    cout << "m.Num : " << myint.m_Num;
    return cout;
}

void test01()
{
    MyInteger myint;
    cout << myint << endl;
    cout << ++(++myint) << endl;
    cout << myint << endl;
}

void test02()
{
    MyInteger myint;
    cout << myint << endl;
    cout << myint++ << endl;
    cout << myint << endl;
}

int main()
{
    //test01();
    test02();
    return 0;
}