#include <iostream>
#include <ctime>
int main(){
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    clock_t start = clock();
    while(clock() - start < delay)
        cout <<"Current time: " << clock() <<endl;
    cout << "start time: " << start <<endl;
    cout << "delay time: " << delay <<endl;
    cout << "done\n";
    return 0;
}