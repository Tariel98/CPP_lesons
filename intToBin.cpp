#include <iostream>
#include <algorithm>
using namespace std;



int main(){

    int number;
    cout << "Pleas enter the number: ";
    cin >> number;

    if (number == 0){
        cout << "The binari number is 0" << endl;
    }else if (number == 1){
        cout << "The binari number is 1" << endl;
    }else{
    
    string theBinNumber;
    string strBin;
    int bin;

    do {

        bin = number % 2;
        strBin = to_string(bin);
        theBinNumber.append(strBin);
        number /= 2;
        
    } while( number > 1);
    
    theBinNumber.append("1");
    reverse(theBinNumber.begin(), theBinNumber.end());
    cout << "The binari number is " << theBinNumber << endl;   
    }

}
