#include <iostream>
using namespace std;

int main () {
    int size; 
    cout << "Pleas enter the count of numbers: ";
    cin >> size;

    int myArray[size];
    cout << "Pleas enter numbers: ";

    for (int i = 0; i < size; ++i){
        cin >> myArray[i];
    }

    for (int i = 0; i < size; ++i){
        if (myArray[i] < 0)
            cout << myArray[i] << " ";
    }

    for (int i = 0; i < size; ++i){
        if (myArray[i] >= 0){
            cout << myArray[i] << " ";
        }
    }
    cout << endl;
}