#include <iostream>
#include <string>
int main(){
    using namespace std;
    string name;
    string name_last;
    cout << "What's your first name? ";
    getline(cin, name);
    cout << "What's your last name? ";
    cin >> name_last;
    name += ' ';
    name += name_last;
    cout << name;
    return 0;
}