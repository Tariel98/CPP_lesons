#include <iostream>
using namespace std;

int main () {

    int number1, number2;

    cout << "Pleas enter 2 numbers: ";
    cin >> number1;
    cin >> number2;

    int* ptr1 = &number1;
    int* ptr2 = &number2;
    
    cout  << endl;
    cout << "Before swping:" << endl; 
    cout << "==============================" << endl;
    cout <<"number1 = " << number1 << endl;
    cout << "number2 = " << number2 << endl;
    cout << "==============================" << endl;
    cout << "After swaping:" << endl;
    cout << "==============================" << endl;

    *ptr1 = *ptr1 + *ptr2; 
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;

    cout <<"Number 1 = " << number1 << endl;
    cout << "Number 2 = " << number2 << endl;
    cout << "==============================" << endl;
}


