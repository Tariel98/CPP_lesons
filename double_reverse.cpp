#include <iostream>
using namespace std;

void revereseArray(int numbers[], int start, int end)
{
	while (start < end)
	{
		int temp = numbers[start];
		numbers[start] = numbers[end];
		numbers[end] = temp;
		start++;
		end--;
	}
}	

int main(){

	int n, a, b, c, d;
    cin >> n >> a >> b >> c >>d;
    a--; b--; c--; d--;
    int numbers[n];

    for (int i = 1; i < (n + 1); ++i){
        for(int j; j < n; ++j){
            numbers[j] = i;
            j++;
            break;
        }
    }
    
	cout << "The array is: ";

    for(int i = 0; i < n; ++i){
        cout << numbers[i] << " ";
    }
    cout << endl;

	revereseArray(numbers, a, b);
    revereseArray(numbers, c, d);

	
	cout << "Reversed array is: ";
    for (int i=0; i<n; ++i ){
        cout << numbers[i] << " ";
    }
    cout << endl;
		
}
