#include <iostream>
using namespace std;

int main() {
    int numbers[10], min, max;
    cout << "Pleas enter 10 numbers: ";

    for (int i = 0; i < 10; ++i){
        cin >> numbers[i];
    }

    for (int i = 1; i < 10; ++i ){

        if (numbers[0] < numbers[i]){
            numbers[0] = numbers[i];
        }

    }
    cout << "The maximum number is " << numbers[0] << endl;

    for (int i = 1; i < 10; ++i ){

        if (numbers[0] > numbers[i]){
            numbers[0] = numbers[i];
        }
    }
        cout <<  "The minimum number is " << numbers[0] << endl;

}