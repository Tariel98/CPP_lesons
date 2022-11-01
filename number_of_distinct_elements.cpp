#include <iostream>
using namespace std;

int main () {

    int n;
    cout << "Pleas Enter Count of numbers: ";
    cin >> n;

    if (n < 1 || n > 100){
        cout << "The number must be between 1 and 100" << endl;
    }else{

    int numbers[n];
    int count = 0;

    cout << "Pleas Enter The elements: ";

    for (int i = 0; i < n; ++i){
        cin >> numbers[i];
    }

    for (int i = 0; i < n; ++i){
        if (numbers[i] < numbers[i+1]){
            count++;
        }else{
            continue;
        }
    }

    cout << "The number of different numbers in the sequence: " << count << endl;
    }
}
