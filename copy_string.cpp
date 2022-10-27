#include <iostream>
using namespace std;

int main() {

    const int length = 999;
    char word[length], wordCopy[length];
    
    cout << "Enter The Word: ";
    cin >> word;

    for (int i = 0; i < length; ++i){
        if (word[i] == '\0'){
            break;
        }
        wordCopy[i] = word[i];
    }

    cout << "The word copy is " << wordCopy << endl;

}