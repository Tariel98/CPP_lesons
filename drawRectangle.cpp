#include <iostream>
using namespace std;

int main (){

    int length, width;
    cout << "Pleas enter length: ";
    cin >> length;
    cout << "Pleas enter width: ";
    cin >> width;

    for (int i = 0; i < length; ++i){
        cout << "*";  
    }
    cout << "\n";
    for (int x = 0; x < (width - 2); ++x){
            cout << "*";
            for (int y = 0; y < (length - 2); ++y){
                cout << " ";
            }
            for (int i = 0; i < (width - (width - 1)); ++i){
                cout << "*";
            }
            cout << "\n";
        }
    for (int i = 0; i < length; ++i){
        cout << "*";
        
        }
}