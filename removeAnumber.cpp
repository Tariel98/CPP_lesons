#include <iostream>
using namespace std;

int main() {

    int numbers[10];
    int elem;
    cout << "Pleas enter 10 array numbers: ";

    for (int i = 0; i < 10; ++i)
        cin >> numbers[i];
     
    cout << "PLeas enter integer to delete: ";
    cin >> elem;

    for (int i = 0; i < 10; ++i){
       if (numbers[i] == elem){
            numbers[i] = numbers[i+1];
            
       }
    }

    cout << "The arr is ";
    for (int n: numbers){
        cout << n;
    }

}

