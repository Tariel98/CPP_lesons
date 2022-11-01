#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter The Array Size: ";
    cin >> n;
    int array[n];

    cout << "Enter The Array Elements: ";
    for(int i=0; i<n; ++i) cin >> array[i];

    for (int i=0; i<n; i+=2) cout << array[i] << " ";
    cout << endl;
}