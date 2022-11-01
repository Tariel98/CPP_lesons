#include <iostream>
using namespace std;

void sortArray(int arr[], int n){

    for (int i=0; i<n; ++i){
        for (int j=i+1; j<n; ++j){
            if (arr[i]>arr[j]){
                arr[i] = abs(arr[i]) + abs( arr[j]);
                arr[j] = abs(arr[i]) - abs( arr[j]);
                arr[i] = abs(arr[i]) - abs(arr[j]);
            }
        }
    }
}

int productSubArray(int arr[], int n){

    int sub=1;

    for (int i=2; i<n; ++i){
        sub *= arr[i];
    }
    return sub;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n; ++i ){
        cin >> arr[i];
    }

    sortArray(arr, n);

    cout << productSubArray(arr, n)<< endl;
}
