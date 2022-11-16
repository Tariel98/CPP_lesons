#include <iostream>
using namespace std;

int main() {

    int n, x;
    cin >> n >> x;
    int arr[n], index1, index2;

    for (int i=0; i<n; i++) cin >> arr[i];

    for (int i=0; i<n; ++i){
        if (x == arr[i]){
            index1 = i;
            break;
        }
    }
   
    for (int i=n-1; i>=0; --i){
        if (arr[i] == x){
            index2 = i;
            break;
        }
    }

        cout << index1 << " " << index2 << endl;
}