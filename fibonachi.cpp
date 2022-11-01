#include <iostream>

int iterativeFibonachi (int number){
    int num = 0, num2 = 1, fibo = 0;   

    if (number == 1){
        return num;
    }else if (number == 2){
        return num2;
    }else{
        for (int i=1; i<=number; ++i){
            fibo = num + num2;
            num = num2;
            num2 = fibo;
    }
    }
    return num;
}

int main() {
    int num;
    std::cin >> num;
    std::cout << iterativeFibonachi(num) << std::endl;
}
