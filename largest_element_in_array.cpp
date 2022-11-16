#include <iostream>
using namespace std;

int largestElementArray(int arr[], int n){

    int max=0, i=0, j=0;

    for(i=0; i<n; ++i){
        j = i+1;
        if (j > n-1) break;
        if (arr[i] > arr[j]){
            max = arr[i];
        }else{
            max = arr[j];
        }
    }
    return max;
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; ++i) cin >> arr[i];

    cout <<  largestElementArray(arr, n) << endl;
}