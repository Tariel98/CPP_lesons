#include <iostream>

int binary_search(int arr[], int number, int hight, int low){
    
    if (hight < low)
        return false;
    int midle = (hight + low)/2;
    if (number == arr[midle])
        return midle;
    else if(number > arr[midle] )
        return binary_search(arr, number, hight, midle + 1);
    else 
        return binary_search(arr,  number, midle - 1, low);

}

int main(){
    int n, number;
    std::cin >> n >> number;
    int arr[n];
    
    for(int i=0; i<n; ++i) std::cin >> arr[i];

    std::cout<< binary_search(arr, number, n-1, 0) << std::endl;
}
