#include <iostream>

int main() {
    int randomNumber = std::rand()/((RAND_MAX + 1u)/100);
    int repeat = 0;
    int userNumber;

    do{
        std::cout << "Note: the number must be between 1 and 100" << std::endl;
        std::cout << "Guess a number: ";
        std::cin >> userNumber;
        if (userNumber < 1 || userNumber > 100){
            std::cout << "The number you entered does not belong to the set 1 to 100!" << std::endl;
        }else if (userNumber > randomNumber){
            std::cout << "Too hight!" << "\nTry again: ";
        }else if (userNumber < randomNumber){
            std::cout << "Too low!" << "\nTry again: ";
        }
        repeat += 1;
    }while(userNumber != randomNumber);

    std::cout << "Perfect! You guessed the number in " << repeat << " tries." << std::endl;
    
}
