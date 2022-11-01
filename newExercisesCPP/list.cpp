#include <iostream>


int main() {
	int numbers[] = {1, 2, 5, 6, 3, 1, 9, 6, 5, 7, 9, 8};
	int length = sizeof(numbers)  / sizeof(numbers[0]);
	int newNumbers[length];

	for (int i = 0; i < length; ++i){
		for (int j = 1; j < (length - 1); ++j)
			newNumbers[i] = numbers[i];
	}

	int lengthNew = sizeof(newNumbers) / sizeof(newNumbers[0]);
	std::cout << "The old list is: ";
	for (int i = 0; i < length; ++i){
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "The new list is: ";

	for (int i = 0; i < lengthNew; ++i){
		std::cout << newNumbers[i] << " ";
	}
	
    std::cout << std::endl;
}
