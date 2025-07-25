#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char my_name[]="shi,\0" "quan";
    int length = strlen(my_name);
    cout << length <<endl;
    cout <<"this" " is " <<"a " "\0" "test1"<< "test.";
    return 0;
}