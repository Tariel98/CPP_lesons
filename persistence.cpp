#include <iostream>


int persistence(long long n){

    if (n<=9) return 0;
    int multy = n, count = 0;

    while (multy > 9){
        count++;
        multy = 1;
        while (n > 0){
            multy *= (n % 10);
            n /= 10;
        }
        n = multy;
    }
        return count;
}

int main () {
    int n;
    std::cin >> n;

    std::cout << persistence(n) << std::endl;
}



