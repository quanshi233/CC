#include <iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout << "Person的无参构造函数调用" << endl;
    }
    //有参构造函数
    Person(int age, int height)
    {
        m_Age = age;
        m_Height = new int(height);
        cout << "Person的有参构造函数调用" << endl;
    }
    // 自己实现拷贝构造函数 解决浅拷贝带来的问题
    Person(const Person &p)
    {
        //将传入的人身上的所有属性，拷贝到我身上
        m_Age = p.m_Age;
        // m_Height = p.m_Height; // 编译器默认实现就是这行代码
        // 深拷贝操作
        m_Height = new int(*p.m_Height);
        cout << "Person的拷贝构造函数调用" << endl;
    }
    ~Person()
    {
        //析构代码，将堆区开辟数据做释放操作
        if (m_Height != NULL){
            //浅拷贝带来的问题就是堆区的内存重复释放
            delete m_Height;
            m_Height = NULL;
        } 
        cout << "Person的析构函数调用" << endl;  
    }
    int m_Age;
    int *m_Height;
};

void test01(){
    Person p1(18, 170);
    Person p2(p1);
    cout << "age of p1 : " << p1.m_Age << ". Height of p1 : " << *p1.m_Height << endl;
    cout << "age of p2 : " << p2.m_Age << ". Height of p2 : " << *p2.m_Height << endl;
}

int main(){
    test01();
    return 0;
}