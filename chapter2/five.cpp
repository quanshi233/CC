#include <iostream>
using namespace std;
double cel_to_fah(double);
int main(){
    cout << "Enter a Clesius value: ";
    double cel;
    cin >> cel;
    double fah = cel_to_fah(cel);
    cout << cel << " degree Celsius is " <<fah <<" degree Fahrenheit" <<endl;
    return 0;
}
double cel_to_fah(double cel){
    double fah = 1.8 * cel +32.0;
    return fah;
}