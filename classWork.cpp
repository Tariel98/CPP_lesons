#include <iostream>
using namespace std;

int main() {

    int arr[8];

    for (int i=0; i<8; ++i){
        cin >> arr[i];
    }

    for (int i=0; i<8; ++i){
       int index = arr[i] - 1;
       if (arr[index] < 0){ cout << arr[index +1] << " ";}
       arr[index] = -arr[index];
    }
    cout <<endl;

}