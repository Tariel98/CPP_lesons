#include <iostream>
using namespace std;

void f(int*x ){

    x = new int(3);
}
int main() {

    int* p = new int(5);
    cout << *p << endl;
    f(p);
    cout << *p << endl;
    return 0;
}