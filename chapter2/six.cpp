#include <iostream>
using namespace std;
double ly_to_au(double);
int main(){
    cout << "Enter the number of light years: ";
    double ly;
    cin >> ly;
    double au = ly_to_au(ly);
    cout << ly << " light years = " <<au <<" astronomical units" <<endl;
    return 0;
}
double ly_to_au(double ly){
    double au = 63240 * ly;
    return au;
}