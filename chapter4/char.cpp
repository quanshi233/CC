#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(65001);
    char my_name[7] = "石头";
    char name[11] = {'s','h','i',',','q','u','a','n','.'};
    char name_1[10]="shi,quan.";
    int length = strlen(name), l_my_name = strlen(my_name);
    cout <<length <<endl;
    for (int i=0; i<=length; i++){
        cout << name[i];
    }
    cout <<"\n" << l_my_name << endl;
    cout << my_name << "石头";
    return 0;
}