#include <iostream>
using namespace std;

int main () {

    int length = 100, i, j;
    char* string1 = new char[length]();
    char* string2 = new char[length]();
    char* concatenate = new char[200]();

    cout << "Pleas Enter First Word: ";
    cin >> string1;
    cout << "Pleas Enter Second Word: ";
    cin >> string2;

    while(*(string1 + i) != '\0'){
        concatenate[i] = string1[i];
        i++;
    }

    while (*(string2 + j) != '\0')
    {
        concatenate[i] = string2[j];
        i++;
        j++;
    }
    cout <<"The Concatenating string is: " << concatenate << endl;
}
