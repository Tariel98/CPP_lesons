#include <iostream>

int main () {

    int number, sum=0;
    std::cout << "Pleas enter the number: ";
    std::cin >> number;

    if (number >= 1 && number <= 1000){

        for (int i = 0; i < number; ++i){
            if (i % 3 == 0 || i % 5 == 0){
                sum += i;
            }else{
                continue;   
            }
        }
        std::cout << "The sum of these multiples is " << sum << "." << std::endl;
    }else{
        std::cout << "The entered number is outside the range 1 to 1000!" << "\nTry again: "; 
    }
}