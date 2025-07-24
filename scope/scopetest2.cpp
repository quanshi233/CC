#include <iostream>
using namespace std;
int main(){
    int test = 0;
    int sum = 0;
    if(true){
        int sum=0;
        while(test<=10){
            sum += test;
            test++;
            cout << "sum:" <<sum <<endl;
        }
    }
    cout <<"test: "<<test <<endl <<"sum: "<<sum <<endl;
    return 0;
}