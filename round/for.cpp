#include <iostream>
#include "compare.h"
int main(){
    double a, b;
    long long c=0;
    using namespace std;
    cout << "Please enter two number.\n";
    cin >> a >> b;
    if(a>=b){
        for(int val = a; val >= b; val--){
            c += val;
        }
    }else{
        for(int val = a; val <= b; val++){
            c += val;
        }
    }
    cout << "Sum of " << smaller(a, b) <<" to " << bigger(a, b) << " is " << c <<endl;
    return 0;
}