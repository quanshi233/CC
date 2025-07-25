#include <iostream>
#include <cstring>
using namespace std;
int main(){
    const int Size = 20;
    char name[Size];
    char dessert[Size];
    cout << "Enter your name: ";
    cin.get(name, Size).get();
    cout << "Enter your favorite dessert: ";
    cin.get(dessert, Size).get();
    cout << "I have some delicious "<< dessert 
         <<" for you, " <<name <<endl;
    return 0;
}