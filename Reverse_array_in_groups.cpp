#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    
    for(int i=0; i<n; i++) cin >> arr[i];

    for(int i=0; i<n; i++){
        for (int j=i+1; j<k; j++){
            arr[i] = arr[j] + arr[i];
            arr[j] = arr[i] - arr[j];
            arr[i] = arr[i] -arr[j];
        }
    }

    for (int i=n-1; i>=k; --i){
        for (int j =i-1; j>=k; --j){
            arr[i] = arr[j] + arr[i];
            arr[j] = arr[i] - arr[j];
            arr[i] = arr[i] -arr[j];
        }
    }

    for (int i=0; i<n; ++i) cout << arr[i] << " ";
    cout << endl;
}