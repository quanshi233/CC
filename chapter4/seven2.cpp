#include <iostream>
#include <string>
using namespace std;

struct Pizza{
    string brand;
    bool temp;
    union{
        int int_val;
        double double_val;
};
};
int main(){
    Pizza example;
    cout << "Enter the brand: ";
    getline(cin, example.brand);
    cout << "Enter the type: ";
    cin >> example.temp;
    if (example.temp == 1){
        cout << "Enter int value: ";
        cin >> example.int_val;
        cout << example.brand <<endl
             << example.int_val <<endl;
    }else{
        cout << "Enter double value: ";
        cin >> example.double_val;
        cout << example.brand <<endl
             << example.double_val <<endl;
    }
         return 0;
}