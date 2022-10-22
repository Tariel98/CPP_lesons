#include <iostream>
using namespace std;


int main() {

    int negNum, posNum;
    int number;


   do {
        cout << "PLeas enter number: ";
        cin >> number;
        if (number > 0){
            posNum += 1;
        }else if (number < 0){
            negNum += 1;
        }
    } while (number != 0);

    cout << "The negaive nubers count " << negNum << endl;
    cout << "The positive numers count " << posNum << endl;
}



