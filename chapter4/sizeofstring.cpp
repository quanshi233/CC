#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    char name[]="shi,quan.";
    int size1 = sizeof(name), length = strlen(name);
    cout <<"size of name is " << size1 <<endl
         <<"length of name is " << length <<endl;
         return 0;
}