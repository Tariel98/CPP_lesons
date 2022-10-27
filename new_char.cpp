#include <iostream>

int main() {

    char* numbers = new char[100]();
    int size = 0;

    std::cin >> *numbers;

    while (*numbers != "\0"){
        std::cout << "s" << std::endl;
        size++;
        numbers++;
    }

}