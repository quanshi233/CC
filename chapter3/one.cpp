#include <iostream>
int main(){
    using namespace std;
    int height;
    cout << "How tall are you?(in ft)\n";
    cin >> height;
    const int InchToFt = 12;
    int inch, ft;
    inch = height / InchToFt;
    ft = height % InchToFt;
    cout << "You are " << inch << " inches and " << ft << " feet tall.\n";
    return 0;
}