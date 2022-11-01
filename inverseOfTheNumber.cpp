#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


/*
int main() {
    string number;
    cout << "Pleas enter the number: ";
    cin >> number;
    reverse(number.begin(), number.end());
    int numberInt =  stoi(number);
    cout << "The reversed number will be " << numberInt << "." << endl;
    
}
*/

 #include <bits/stdc++.h>
using namespace std;
 

void reverse(string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
}

int main (){
    string number;
    cout << "Pleas enter number: ";
    cin >> number;

    reverse(number);
}
