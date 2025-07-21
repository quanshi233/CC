#include <iostream>
using namespace std;
void time1(int, int);
int main(){
    cout << "Enter the number of hours: ";
    int hour;
    cin >> hour;
    cout << "/nEnter the number of minutes: ";
    int minute;
    cin >> minute;
    time1(hour, minute);
    return 0;
}
void time1(int a,int b)
{
    cout << "Time: " << a << " : "<< b;
}