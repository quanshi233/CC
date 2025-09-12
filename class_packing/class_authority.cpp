#include <iostream>
using namespace std;
// 访问权限
// 三种
// 公共权限 public 成员 类内可以访问 类外可以访问
// 保护权限 protected 成员 类内可以访问 类外不可以访问 子类可以访问父类保护内容
// 私有权限 private 成员 类内可以访问 类外不可以访问 子类不可以访问父类私有内容
class Person
{
public:
    string m_Name;

protected:
    string m_Car;

private:
    int m_Password;

};
int main()
{
    
}