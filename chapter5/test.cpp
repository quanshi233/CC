#include <iostream>
int main(){
    int temp1=0;
    while(temp1++ < 10){
        std::cout << temp1 <<std::endl;
    }
    int temp2=0;
    while(++temp2 < 10){
        std::cout << temp2 <<std::endl;
    }
    return 0;
}