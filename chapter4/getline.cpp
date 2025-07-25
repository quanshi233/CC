#include <iostream>
#include <cstring>
using namespace std;
int main(){
    const int Size = 20;
    char name[Size];
    char dessert[Size];
    cout << "Enter your name: ";
    cin.getline(name, Size);
    cout << "Enter your favorite dessert: ";
    cin.getline(dessert, Size);
    cout << "I have some delicious "<< dessert 
         <<" for you, " <<name <<endl;
    return 0;
}