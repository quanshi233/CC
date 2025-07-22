#include <iostream>
#include <climits>
int main(){
    using namespace std;
    short me = SHRT_MAX;
    unsigned short my_friend = me;
    cout <<"I have " << me <<" dollars deposited"
         <<" and my friend have " << my_friend <<" dollars deposited." << endl;
    me = me+1;
    my_friend = my_friend+1;
    cout <<"Now I have " << me << " dollars deposited"
         <<" and my friend have " << my_friend << " dollars deposited." << endl;
}