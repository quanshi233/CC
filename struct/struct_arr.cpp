#include <iostream>
#include <string>
using namespace std;
struct Student{
    string name;
    int age;
    int score;
};
int main(){
    Student stuArray[] = {
        {"ZhangSan", 18, 100},
        {"李四", 19 ,98}
    };
    for(int i=0; i<2; i++)
    cout << "Name: " << stuArray[i].name << endl
         << "age: " << stuArray[i].age << endl
         << "score: " << stuArray[i].score << endl
         << "------------------" << endl;
         return 0;
}