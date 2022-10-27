#include <iostream>
using namespace std;

int main () {

    int size;
    cout << "Pleas Enter Array Elements Count: ";
    cin >> size;
    int numbers[size], maxCount = 0, mostPopElement, mostPopElementAverage;

    cout << "Pleas Enter Array Elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    for (int i = 0; i < size; ++i) {
        int count = 0;
        for (int j = 0; j < size; ++j){
            if (numbers[i] == numbers[j]){
                count++;
            }
            if (count > maxCount){
                maxCount = count;
                mostPopElement = numbers[i];
            }
        }
    }

    cout << "The Most Popular Element Is: " << mostPopElement << endl;
  
}