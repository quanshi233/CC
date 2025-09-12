#include <iostream>
using namespace std;
//如果传入了自己的数据，就用自己的数据，如果没有，那么用默认值
int func(int a, int b = 20, int c = 30){
    return a+b+c;
}
//注意事项
//如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都要有默认值
// int func2(int a, int b=100, int c){
//     return a+b+c;
// }
//如果函数声明有了默认参数，函数实现就不能有默认参数
//声明和实现只能一个有默认参数
// int func2(int a, int b=20);
// int func2(int a=10, int b){
//     return a+b;
// }
int main(){
    cout << func(10, 20) << endl;
    //cout << func2() << endl;
    return 0;
}