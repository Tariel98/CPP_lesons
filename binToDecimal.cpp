#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){

    string binNum;
    cout << "Pleas enter the binary number: ";
    cin >> binNum;
    int length = binNum.length();
    int rank = length - 1;
    reverse(binNum.begin(), binNum.end());
    int num, decimal=0, n;
    num = stoi(binNum);
    
    for (int i = 0; i < length; ++i){
        n = num % 10;
        decimal += n * pow(2, rank);
        num /= 10;
        rank--;
    }
     cout << "The decimal number is " << decimal << endl;
}
