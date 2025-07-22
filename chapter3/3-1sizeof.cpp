#include <iostream>
#include <climits>
#define TEST_STRING "sq0530"
#define TEST_NUMBER 530
int main(){
    using namespace std;
    int test_number = TEST_NUMBER;
    int n_int = INT_MAX;
    int n_min_int = INT_MIN;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    unsigned long long n_ullong = ULLONG_MAX;
    cout << "test number is " << test_number <<"." <<endl
         << "test string is " << TEST_STRING <<"." <<endl;
    cout << "int is " << sizeof (int) << " bytes." <<endl;
    cout << "short is " << sizeof (n_short)  << " bytes." <<endl;
    cout << "long is " << sizeof n_long << " bytes." <<endl;
    cout << "llong is " << sizeof n_llong  << " bytes." <<endl;
    cout << "ullong is " << sizeof n_ullong  << " bytes." <<endl;
    cout << endl;
    cout << "Maximum values:" <<endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "llong: " << n_llong << endl;
    cout << "ullong: " << n_ullong << endl;
    cout << "Minimum int value = " << n_min_int << endl;
    cout << "Bits per byte = " <<CHAR_BIT << endl;
    return 0;
}