#include <iostream>
using namespace std;

int trappingWater(int arr[], int n){

    int maxHight=0, count=0;

    if (arr[0] >= arr[n-1])
        maxHight = arr[n-1];
    else
        maxHight = arr[0];
    
    for (int i=0; i<n; ++i){
       int jur = maxHight - arr[i];
        if (jur >= 0){
            count += jur;} 
    }
    return count;    
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i=0; i<n; ++i) cin >> arr[i];
    
        cout << trappingWater(arr, n) << endl;
}
