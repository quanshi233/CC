#include <iostream>
double smaller(double, double);
double bigger(double, double);
int main(){
    int a, b;
    long long c=0;
    using namespace std;
    cout << "Please enter two number.\n";
    cin >> a >> b;
    if(a>=b){
        for(int val = a; val >= b; val--){
            c += val;
        }
    }else{
        for(int val; val <= b; val++){
            c += val;
        }
    }
    cout << "Sum of " << smaller(a, b) <<" to " << bigger(a, b) << " is " << c <<endl;
    return 0;
}
double smaller(double a, double b){
    if(a>=b){
        return b;
    }else{
        return a;
    }
}
double bigger(double a, double b){
    if(a>=b){
        return a;
    }else{
        return b;
    }
}