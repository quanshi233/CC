#include <iostream>
int main(){
    int a, b;
    long long c=0;
    using namespace std;
    cout << "Please enter two number.\n";
    cin >> a >> b;
    int number1 = a, number2 = b;
    if (a>=b){
        while(a>=b){
            c += a;
            a--;
        }
    }else{
        while(a<=b){
            c += a;
            a++;
        }
    cout << "Sum of " << number1 <<" to " << number2 << " is " << c <<endl;
    return 0;
    }
}