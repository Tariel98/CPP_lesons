#include <iostream>
using namespace std;

bool primeNumber(int num){
    
    bool prime = true;
    
    for(int i=2; i<num; ++i){
        if (num % i == 0){
            prime = false;
        }
    }
    return prime;    

}

int main () {
    int number;
    cin >> number;
    cout << primeNumber(number) << endl;
}
