#include <iostream>
using namespace std;
//struct和class区别
//struct默认权限是public
//class默认权限是private
class C1
{
    int m_A;//默认权限是私有
};
struct C2
{
    int m_A;//默认权限是公有
    void printValue(){
        cout << m_A << endl;
    }
};
int main(){
    C1 c1;
    //c1.m_A = 100;
    C2 c2;
    c2.m_A = 10;
    c2.printValue();
    return 0;
}