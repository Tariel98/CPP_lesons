#include <iostream>
using namespace std;

int k_th_smallest_elem (int arr[], int n, int k ){

    for (int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            if (arr[i] > arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }

    }
    return arr[k-1];
}

int main () {
    int n, k;
    cout<< "Enter The Array Size: ";
    cin >>n;
    
    cout << "Enter The Array Elements: ";
    int arr[n];
    for (int i=0; i<n; ++i) cin >> arr[i];
    
    cout << "Enter K Element: ";
    cin >> k;
    cout << k_th_smallest_elem(arr, n, k) << endl;
}
