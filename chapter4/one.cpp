#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    char name[20];
    char name_last[10];
    cout << "What's your first name? ";
    cin.getline(name,20);
    cout << "What's your last name? ";
    cin.getline(name_last,10);
    strcat(name, " ");
    strcat(name, name_last);
    cout << name;
    return 0;
}