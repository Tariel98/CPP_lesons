#include <iostream>

int main () {

    int numOfElements, sum=0;
    int* numbers = new int[numOfElements];
    
    std::cout << "Pleas enter number of elements: ";
    std::cin >> numOfElements;
    std::cout << "Pleas enter elements: ";

    for (int i = 0; i < numOfElements; ++i){
        std::cin >> numbers[i];
        sum += *(numbers + i);
    }
    
    std::cout << "The sum of the array elements will be: " << sum << std::endl;

    delete [] numbers;

}