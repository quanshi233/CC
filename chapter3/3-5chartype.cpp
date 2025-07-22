#include <iostream>
int main(){
    using namespace std;
    char ch;
    int a;
    cout << "What will you input?(Character press 1/ASCII code press 0)" <<endl;
    cin >> a;
    if (a == 1){
        cout << "Enter a character: " <<endl;
        cin >> ch;
        cout << "The ASCII code of " << ch << " is " << int(ch) <<endl
            << "And the ASCII code of " << char(ch+1) << " is " << ch+1 <<endl; 
    }else{
        int ascii;
        cout << "Enter a ASCII code: " <<endl;
        cin >> ascii;
        ch = ascii;
        cout <<"The ASCII code for " << char(ch) << " is " << ascii << endl;
    }
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    cout.put('!');
    return 0;
}