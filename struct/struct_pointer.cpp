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
    Student stu = {"WangWu", 60, 10};
    Student *p = &stu;
    cout << p->name << endl;
    cout << (stuArray+1)->name << endl;
    return 0;
}