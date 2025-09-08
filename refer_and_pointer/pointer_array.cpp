#include <iostream>
int main(){
    using namespace std;
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    cout << arr[1] << endl;
    int *p =arr;
    for (int i=0; i<10; i++){
        cout << &(arr[i]) <<endl;
    }
    for (int i=0; i<10; i++){
        cout << (p+i) << endl;
    }
    for (int i=0; i<10; i++){
        cout << *(p+i) << endl;
    }
    for (int i=0; i<10; i++){
        cout << &p << endl;
        p++;
    }
    return 0;
}