#include <iostream>
#include <algorithm>
using namespace std;

int main () {

    int n;
    cin >> n;

    if (n > 100 || n < 1){
        cout << "The number of cards must be between 1 and 100!" << endl;
    }
    else{
    n = n - 1;
    int cards[n] ;

    for (int i = 0; i < n; ++i){
        cin >> cards[i];
    }

    for (int i = 1; i < (n + 1); ++i ){
     if(find(cards, cards + n, i) != cards + n){
        continue;
     }else{
        cout << "The Missing Card is: ";
        cout << i << endl;
     }
        }
    
    }
}
