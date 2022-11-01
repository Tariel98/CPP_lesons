#include <iostream>
using namespace std;

void reverse(int array[], int start, int end){
    while (start < end){
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}
int main() {

    int size;
    cout << "Enter The Size: ";
    cin >> size;
    int array[size], array2[size], sum[size];

    cout << "Enter first array elements: ";
    for(int i=0; i<size; ++i) cin >> array[i];

    cout << "Enter second array elements: ";
    for (int i=0; i<size; ++i) cin >> array2[i];

    reverse(array, 0, size-1);
    reverse(array2, 0, size-1);

    for (int i=0; i<size; ++i){
        if ((array[i] + array2[i]) > 9){
            sum[i] = (array2[i] + array[i]) % 10;
            sum[i-1] += (array2[i] + array[i]) / 10;
        }else{
            sum[i] = array2[i] + array[i];
        }
    }

    reverse(sum, 0, size-1);

    for (int i=0; i<size; ++i) cout << sum[i] << " ";

    cout << endl;

}


