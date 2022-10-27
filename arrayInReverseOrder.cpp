#include <iostream>
using namespace std;

int main()
{
    int length;
    int reverse[length];

    cout << "Pleas Enter The length for array: ";
    cin >> length;
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < length; ++i){
        cin >> reverse[i];
    }

    cout << "The Reversing array is: ";
    for (int i = (length - 1); i >= 0; --i){
        cout << *(reverse + i)<< " ";
    }
        cout << endl;
}