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
    Pizza *p1 = new Pizza;
    getline(cin,p1->brand);
    cin >> p1->dia.double_val;
    cin >> (*p1).weight.int_val;
    cout << "This is the brand: " << (*p1).brand << endl;
    cout << "This is the dia: " << (*p1).dia.double_val <<endl
         << "This is the weight: " << p1->weight.int_val <<endl;
    return 0;
}