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
    cout << "Input the brand: ";
    getline(cin,p1->brand);
    cout << "Input the dia: ";
    cin >> p1->dia.double_val;
    cout << "Input the weight: ";
    cin >> (*p1).weight.int_val;
    cout << "This is the brand: " << (*p1).brand << endl;
    cout << "This is the dia: " << (*p1).dia.double_val <<endl
         << "This is the weight: " << p1->weight.int_val <<endl;
    delete p1;
    cout << "The size of the strucut is: " << sizeof (*p1)  << endl;
    cout << "The size of the union is: " << sizeof (one4all) << endl;
    return 0;
}