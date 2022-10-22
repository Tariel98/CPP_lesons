#include <iostream>
using namespace std;

int main(){
    int number, sum=0, dig;
    cout << "Pleas enter number: ";
    cin >> number;

    while (number > 0){
        dig = number % 10;
        sum += dig;
        number /= 10;
    }

    cout << "The sum of the digits of the number will be " << sum << "." << endl;
    
}