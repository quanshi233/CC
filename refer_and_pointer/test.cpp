#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int arr[]={12,231};
    int len = sizeof(arr)/sizeof(arr[0]);
    std::cout << len;
}

