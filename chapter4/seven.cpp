#include <iostream>
#include <string>
using namespace std;
union one4all{
    int int_val;
    double double_val;
};
struct Pizza{
    string brand;
    one4all dia;
    one4all weight;
};
int main(){
    Pizza example;
    getline(cin, example.brand);
    cin >> example.dia.int_val;
    cin >> example.weight.double_val;
    cout << example.brand <<endl
         << example.dia.int_val <<endl
         << example.weight.double_val <<endl;
         return 0;
}