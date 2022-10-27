#include <iostream>

int main () {

    std::string one = "*";
    std::string printOne = "*";

    for (int i = 0; i < 5; i++){

        std::cout << printOne << std::endl;
        printOne += one;
       
    }
}