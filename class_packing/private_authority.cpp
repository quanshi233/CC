#include <iostream>
#include <string>
using namespace std;
class Person{

public:
    //设置姓名
    void setName(string name)
    {
        m_Name = name;
    }
    //获取姓名
    string getName()
    {
        return m_Name;
    }
    //获取年龄
    int getAge()
    {
        return m_Age;
    }
    //设置idol
    string setIdol(string idol)
    {
        m_Idol = idol;
    }

private:
    string m_Name;//姓名 可读可写
    int m_Age = 18;//年龄 只读
    string m_Idol;//偶像 只写
};
int main(){
    Person p1;
    //姓名设置
    p1.setName("ZhangSan");
    cout << "Name: " << p1.getName() << endl;
    cout << "Age: " << p1.getAge() << endl;
    //设置偶像
    p1.setIdol("KunKun");
    return 0;
}