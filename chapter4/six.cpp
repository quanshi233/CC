#include <iostream>
#include <string>
using namespace std;
struct CandyBar{
    string brand;
    double weight;
    int calorie;
};
int main(){
    CandyBar snack[2] = {
        {"shilijia", 30, 300},
        {"Mocha Munch", 2.3, 350}
    };
    cout << snack <<endl;
    return 0;
}