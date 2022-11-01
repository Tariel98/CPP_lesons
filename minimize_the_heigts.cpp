#include <iostream>

int main () {
    int n;
    std::cout << "Enter N: ";
    std::cin >> n;
    int arr[n];
    int k;
    std::cout << "Enter K: ";
    std::cin >>k;
    int difference;

    std::cout << "Enter The Array Elements: ";
    for (int i=0; i<n; ++i) std::cin >> arr[i];
    
    arr[0] = arr[0] + k;
    arr[1] = arr[1] + k;

    for(int i=2; i<n; ++i){
        arr[i] -= k;
    }

    for (int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            if(arr[i] > arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    std::cout << "The difference between the biggest and the smallest will be " << arr[n-1] << " - " <<arr[0] << " = " << arr[n-1] - arr[0]
      << std::endl; 

}
