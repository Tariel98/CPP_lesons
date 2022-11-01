#include <iostream>
using namespace std;

void revers_array(int arr[], int reversed_arr[], int n){


    for (int i=0; i<n; ++i){
    int reversed_number=0, remainder, temp;
    temp = arr[i];
    while(temp != 0){
        remainder = temp % 10;
        reversed_number = reversed_number * 10 + remainder;
        temp /= 10;
        }
        reversed_arr[i] = reversed_number;
    }

}

int polidromic_review(int arr[], int reversed_arr[], int n){


     for (int i=0; i<n; ++i){
        if (arr[i] != reversed_arr[i]){
            return false;
        }
    }
     return true;
}

int main () {

    int n;
    cout << "Enter The Array Size: ";
    cin >> n;
    int arr[n], reversed_arr[n];

    cout << "Enter The Array Elements: ";
    for (int i=0; i<n; i++) cin >> arr[i];  


    revers_array(arr, reversed_arr, n);
    cout << polidromic_review(arr, reversed_arr, n) << endl;
    
    

}
