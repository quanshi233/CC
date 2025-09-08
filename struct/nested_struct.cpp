#include <iostream>
#include <string>
using namespace std;
struct Student{
    string name;
    int age;
    int score;
};
struct Teacher{
    string name;
    int id;
    Student stu;
};
int main(){
    Teacher t;
    t.name = "ZhangSan";
    t.id = 1000;
    t.stu.name = "XiaoWang";
    t.stu.age = 18;
    t.stu.score = 100;
    return 0;
}