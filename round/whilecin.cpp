#include <iostream>
int main(){
    int sum = 0, val =0;
    std::cout << "Enter the numbers: ";
    while(std::cin >> val)//结束符Ctrl+Z
        sum += val;
    std::cout << "Sum is " << sum << std::endl;
    return 0;
}