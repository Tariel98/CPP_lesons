#include <iostream>
using namespace std;

int main () {

    int size;
    cout << "Enter Array Size: ";
    cin >> size;
    int arr[size];

    cout << "Enter The Array Elements: ";
    for (int i=0; i<size; ++i) cin >> arr[i];

    int* dublicate = new int[size], dublSize=0;

    for (int i=0; i<size; ++i){
        int index = abs(arr[i]) - 1;
        if (arr[index] < 0){
            dublicate[dublSize] = index + 1;
            dublSize++; 
        } 
        arr[index] = -arr[index];
    }

    for (int i=0; i<size; ++i){
    if (dublicate[i] > 0)
     cout << dublicate[i] << " ";
     }
    cout << endl;

    delete dublicate;
}


