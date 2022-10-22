#include <iostream>
using namespace std;

void traverseString( string &str, int N){
    for (int i = 0; i < N; i++){
        cout << str[i]<< endl;
    }
}


int main(){
    string str;

    cout << "Pleas enter text: ";
    cin >> str;
    int N = str.length();
    cout << N << endl;

    traverseString(str, N);
  
}