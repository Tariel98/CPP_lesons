#include <iostream>
using namespace std;

int main () {
    int chik = 1;
    int n;
    cout << "Pleas enter the days: " ;
    cin >> n;

    for (int i=1; i<n; i++){
        chik += 2;
        if (i == 6){
            chik -= 2;
        }
    }

    cout << "Chiks will be: " << chik << endl;

}
