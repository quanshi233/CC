#include <iostream>
#include <string>
using namespace std;
class Phone
{
public:
    Phone()
    {
        cout << "class Phone has been created." << endl;
    }
    Phone(string a):m_Pname(a)
    {
        cout << "class Phone has been created." << endl;
    }
    ~Phone()
    {
        cout << "class Phone has been destructed." << endl;  
    }
    string m_Pname;
};

class Person
{
public:
    Person()
    {
        cout << "class Person has been created." << endl;
    }
    Person(string name, string pName):m_Name(name),m_Phone(pName)// Phone m_Phone = pName
    {
        cout << "class Person has been created." << endl;
    }
    ~Person()
    {
        cout << "class Person has been destructed." << endl;  
    }
    //当其他类对象作为本类成员，构造时候先构造其他类对象，再构造自身,析构的顺序则相反
    Phone m_Phone;
    string m_Name;
};
void test01(){
    Person p("Zhangsan", "Apple");
    cout << p.m_Name << " is picking " << p.m_Phone.m_Pname << " Phone." << endl;
}

int main(){
    test01();
    return 0;
}