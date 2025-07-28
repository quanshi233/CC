#include <iostream>
int main()
{
    using std::cout;
    int a = 20;
    int b = 20;

    cout << "a   = " << a << ":   b = " << b << "\n";
    cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
    cout << "a   = " << a << ":   b = " << b << "\n";
    int c = a++, d = ++b;
    cout << "c   = " << c << ":   d = " << d << "\n";
	return 0;
}