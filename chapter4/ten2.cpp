#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a;
    cout << "How many times you have tested: ";
    cin >> a;
    vector<double> grade(a);
    double whole = 0;
    for(int i=0; i<a; i++){
        cin >> grade[i];
        whole += grade[i];
    }
    cout << "Your average grade is : " << whole/a <<endl;
    return 0;
}