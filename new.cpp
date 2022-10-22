#include <iostream>
using namespace std;

int main() {

    int myNum = 7;
    int yournumer;
    cout << "Enter numer: ";
    cin >> yournumer;
    int popitok = 1;

    while (yournumer != myNum){
        cout << "No no no, false!" << endl;
        cout << "Try again: ";
        cin >> yournumer;
        popitok += 1;

    }
    cout << "Molodec!!!! " << popitok << " popitokic gushakir" << endl; 

}
