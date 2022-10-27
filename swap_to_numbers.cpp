#include <iostream>
using namespace std;

int main () {

    int* number1 = new int();
    int* number2 = new int();

    cout << "Pleas enter 2 numbers: ";
    cin >> *number1;
    cin >> *number2;
 
    cout  << endl;
    cout << "Before swping:" << endl; 
    cout << "==============================" << endl;
    cout <<"number1 = " << *number1 << endl;
    cout << "number2 = " << *number2 << endl;
    cout << "==============================" << endl;
    cout << "After swaping:" << endl;
    cout << "==============================" << endl;

    *number1 = *number1 + *number2; 
    *number2 = *number1 - *number2;
    *number1 = *number1 - *number2;

    cout <<"Number 1 = " << *number1 << endl;
    cout << "Number 2 = " << *number2 << endl;
    cout << "==============================" << endl;
}


