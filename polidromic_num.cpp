#include <iostream>

bool polidromicNumber(int num){

    int reversedNumber=0, remainder, temp=num;

    while(temp != 0){
          remainder = temp % 10;
          reversedNumber = reversedNumber * 10 + remainder;
          temp /= 10;
          }
    if (reversedNumber == num)
        return true;
    else 
        return false;
}

int main () {
    int number;
    std::cin >> number;

    std::cout << polidromicNumber(number) << std::endl;
}
