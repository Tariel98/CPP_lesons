#include <iostream>
#include <ostream>
#include <string>
using namespace std;


string reverseStr(string str){
    string revStr;

    for(int i = str.length(); i>=0; i--){
        revStr.append(str[i]);
    }

    return revStr;
}

int main () {

    string str;
    cout << "Enter The Word";
    cin >> str;

    revStr = reverseStr(str);

    if (revStr == str){
        cout << "The Word is polidrome!" << endl;
    }else {
        cout << "The word is not polidrome" << endl;
    }
}
