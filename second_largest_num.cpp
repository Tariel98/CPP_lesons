#include <iostream>
using namespace std;

void secondLargerstNum(int arr[], int n){

    int maxNum=arr[0];

    for (int i=1; i<n; ++i){
        if (maxNum < arr[i]){
            maxNum = arr[i];
        }
    }

        cout << "The Largest Number Is " << maxNum << endl;

    for(int i=0; i<n; ++i){
        if (arr[i] == maxNum){
            int temp = arr[i];
            arr[i] = arr[n-1];
            arr[n-1] = temp;
        }
    }

    maxNum = arr[0];

    for (int j=1; j<(n-1); ++j){
        if (maxNum < arr[j]){
            maxNum = arr[j];
        }
    }
        cout << "The Second Largest Number Is " << maxNum << endl;
    }

int main() {

    int n;
    cout << "Enter The Size: ";
    cin >> n;
    int arr[n];
    cout << "Enter The Elements: ";
    for (int i =0; i<n; ++i){
        cin >> arr[i];
    }

    secondLargerstNum(arr, n);

}