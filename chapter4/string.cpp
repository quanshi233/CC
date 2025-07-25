#include <iostream>
#include <string>
#include <cstring>
int main(){
    using namespace std;
    string str1, str2, str3, str4;
    char char1[20] = "jaguar", char2[20];
    str1 = "panther";
    str2 = str1;
    strcpy(char2,char1);
    str1 += " paste";
    strcat(char1, " juice");
    str3 = " paste";
    str4 = str2 + str3;
    int len1 = strlen(char1);
    int len2 = str1.size();
    cout << "str1: " <<str1 <<endl
         << "str2: " <<str2 <<endl
         << "str3: " <<str3 <<endl
         << "str4: " <<str4 <<endl;
    cout << "char1: " <<char1 <<endl
         << "char2: " <<char2 <<endl;
    cout << "len1::" <<len1 <<endl
         << "len2: " <<len2 <<endl;
    return 0;
}