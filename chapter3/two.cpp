#include <iostream>
#include <cmath>
int main(){
    using namespace std;
    const int InchToFt = 12;
    const double PondToKg = 1/2.2, FtToM = 0.0254;
    double inch, ft, weight_pd;
    cout << "Please enter your height.(In inch ft form)\n";
    cin >> inch >> ft;
    cout << "Please enter your weight.(in pond)\n";
    cin >> weight_pd;
    int height_ft = inch * InchToFt + ft;
    double height_m = height_ft * FtToM;
    double weight_kg = weight_pd * PondToKg;
    double bmi = weight_kg / pow(height_m, 2);
    cout << "Your bmi is " << bmi << ".\n";
    return 0;
}