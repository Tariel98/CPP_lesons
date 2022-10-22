#include <bits/stdc++.h>
using namespace std;


int main() {
    int numbers[10];
    int length = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Pleas enter the numbers: ";

    for (int i = 0; i < 10; ++i){
        cin >> numbers[i];
    }

    cout << "The maximum number is " << *max_element(numbers, numbers + length) << std::endl;
    cout << "The minimum number is " << *min_element(numbers, numbers + length) << std::endl;

}