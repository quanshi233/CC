#include <iostream>
using namespace std;
void showValue(int &val){
    val = 1000;
    cout << "val = " <<val <<endl;
}
int main(){
    //常量引用，用来修饰形参，防止误操作
    const int& ref = 10;//编译器将代码修改为int temp = 10; const int & ref = temp;
    cout << ref << endl;
    int a = 10;
    showValue(a);
    //showValue(ref);
    return 0;
}