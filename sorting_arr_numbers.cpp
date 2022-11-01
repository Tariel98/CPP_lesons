#include <iostream>
using namespace std;


int main() {

    int n;
    cout << "Enter The Array Size: ";
    cin >> n;
    int arr[n], i=0, j=0;

    cout << "Enter The Array Elements: "; 
    for ( i=0; i<n; ++i ) cin >> arr[i];

    for ( i=0; i<n; ++i){
        for (j=i+1; j<n; ++j){
            if (arr[i] > arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    cout << "The sorted array is: ";
    for (i=0; i<n; ++i) cout << arr[i] << " ";
    cout << endl;

}
