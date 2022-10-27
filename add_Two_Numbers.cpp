#include <iostream>
using namespace std;

int sum(int* number1, int* number2){
    return(*number1 + *number2);
}

int main () {

    int number1, number2;
    cout << "Enter two numbers:  ";
    cin >> number1 >> number2;
    cout << number1 << " + " << number2 << " = " << sum(&number1, &number2) << endl;  
}

