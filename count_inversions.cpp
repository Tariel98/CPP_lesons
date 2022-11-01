#include <iostream>
using namespace std;

long long inversionCount(long long arr[], long long n){
    
    long long count=0;
    for(int i=0; i<n; ++i){

        for(int j=i+1; j<n; ++j){
            if (arr[i] > arr[j] && i<j){
                count++;
                } 
        }
    }
        return count;
}

int main () {
    long long n;
    cin >> n;
    long long arr[n];
    
    for(int i=0; i<n; ++i) cin >> arr[i];

    cout << inversionCount(arr, n) << endl;
}
