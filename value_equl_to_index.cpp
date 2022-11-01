#include <iostream>
using namespace std;

int main () {

    int n;
    cout << "Enter The Array Size: ";
    cin >> n;
    int arr[n];

    cout << "Enter The Array Elements: ";
    for (int i =0; i<n; ++i) cin >> arr[i];


    for (int i=0; i<n; ++i){
        if (i+1 == arr[i]){
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}