#include <iostream>
using namespace std;


int main () {

	int size;
	cout << "Pleas enter the count elements: ";
	cin >> size;

	if (size < 1 || size > 100){
		cout << "The entered number must be between 1 and 100" << endl;
	}else{
	int myArray[size];
	int negativeNumberIndex = 0;

	cout << "Pleas enter elements: ";

	for (int i = 0; i < size; ++i) {
		cin >> myArray[i];
	}

	for (int i = 0; i < size; ++i) {
		if (myArray[i] < 0){
			if (i != negativeNumberIndex){
				int tempVar = myArray[i];
				myArray[i] = myArray[negativeNumberIndex];
				myArray[negativeNumberIndex] = tempVar;
				negativeNumberIndex++;
			}
	}
	}

	cout << "The Changed Array Is: ";
	for (int i = 0; i < size; ++i){
		cout << myArray[i] << " ";
	}
	cout << endl;
	}

	}
