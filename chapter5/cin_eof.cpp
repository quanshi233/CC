#include <iostream>
int main(){
    using namespace std;
    char ch;
    cin.get(ch);
    int count = 0;
    while (!cin.fail()) //or (cin.fail() == false)
    {
        cout << ch;
        ++count;
        ch = cin.get();
    }
    cout << endl << count << " characters read\n";
    char end[6];
    cin.clear();
    cin.get(end,6);
    cout << end <<endl;
    return 0;
}