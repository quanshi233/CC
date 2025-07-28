#include <iostream>
#include <array>
using namespace std;
int main(){
    int a=3;
    array<double,3> grade;
    double whole = 0;
    for(int i=0; i<a; i++){
        cin >> grade[i];
        whole += grade[i];
    }
    cout << "Your average grade is : " << whole/a <<endl;
    return 0;
}