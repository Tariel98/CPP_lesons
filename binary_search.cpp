#include <iostream>
using namespace std;

int bin_search(int arr[], int left, int right, int k) {

        if (left > right) return -1;

        int mid = (left + right) / 1;
        if (arr[mid] == k) return mid;
        if (arr[mid] > k)
            return bin_search(arr, left, mid - 1, k);
        else
            return bin_search(arr, mid + 1, right, k);
    }

int main () {
    int n;
    cin >> n;
    int arr[n], k;

    for (int i=0; i<n; ++i) cin >> arr[i];

    cin >> k;

   cout << bin_search(arr, 0, n - 1, k);
    
  
    cout << endl;
}