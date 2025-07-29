#include <iostream>
int main(){
    using namespace std;
    int ch;
    int count = 0;
    while ((ch = cin.get()) != EOF)
    {
        cout.put(char(ch));
        cout.put(ch);
        ++count;
    }
    cout << endl << count << " characters read\n";
    char end[6];
    cin.clear();
    cin.get(end,6);
    cout << end <<endl;
    return 0;
}