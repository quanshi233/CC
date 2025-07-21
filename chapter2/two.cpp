#include <iostream>
using std::cin, std::cout, std::endl;
int long_to_ma(int);
int main(){
    int long1;
    cout << "Please enter the long:";
    cin >> long1;
    int ma;
    ma = long_to_ma(long1);
    cout << long1 <<" long is " << ma <<" ma." << endl;
    return 0; 
}
int long_to_ma(int n){
    int ma = 220 * n;
    return ma;
}