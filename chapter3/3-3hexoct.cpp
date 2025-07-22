#include <iostream>
int main(){
    using namespace std;
    int n_dec = 19;
    int n_oct = 024;
    int n_hex = 0x15;
    cout <<"nineteen is " << n_dec << endl
         <<"twenty is " << n_oct << endl
         <<"twenty-one is " << n_hex << endl;
    cout << oct << "twenty in oct is " << n_oct << endl
         << hex << "twenty-one is " << n_hex << endl
         << binary << "nineteen in decimal is " << n_dec << endl;
         return 0;
}