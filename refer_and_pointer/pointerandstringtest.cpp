#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    const char *p = "Hello,World!";
    cout << "The length of *p is " << strlen(p) <<endl;
    for(int i=0 ; i < strlen(p); ++i)
        cout << p[i];
    return 0;
}