#include <iostream>
using namespace std;
int year_to_month(int);
int main(){
    cout << "Enter your age: ";
    int age;
    cin >> age;
    int month = year_to_month(age);
    cout << "Your age in months is " <<month <<endl;
    return 0;
}
int year_to_month(int year){
    int month = 12 * year;
    return month;
}