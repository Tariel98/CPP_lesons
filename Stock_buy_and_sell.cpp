#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int arr2[n], index=0;

   for(int i=0; i<n; ++i) cin >> arr[i];


    for (int i=0; i<n; ++i) {
        for(int j=i+1; j<n; ++j){
            if (arr[i] > arr[j] && i < j){
                    arr2[index] = i;
                    index ++;
            }       
        }
    }

    for(int i=0; i <n; ++i) cout << arr2[i] << " ";
}


