#include <iostream>
using std::string, std::cin, std::cout, std::endl;
void blindmice(string);
int main(){
    string a;
    cout << "What kind of mouse you see? ";
    cin >> a;
    blindmice(a);
    return 0;
}
void blindmice(string a){
    cout << "Three " << a <<" mice" <<endl;
}