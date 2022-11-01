#include <iostream>
using namespace std;

float sum (float num1, float num2){
    return num1 + num2;
}

float deduction(float num1, float num2){
    return num1 - num2;
}

float multiplication(float num1, float num2){
    return num1 * num2;
}

float division(float num1, float num2){
    return num1 / num2;
}

int remainder(int num1, int num2){
    return num1 % num2;
}

int main () {
    
    float num1, num2;
    string operat;
    cin >> num1 >> operat >> num2;


    if (operat == "+"){
        cout << sum(num1, num2) << endl;
    }else if(operat == "-"){
        cout << deduction(num1, num2) << endl;
    }else if (operat == "*"){
        cout << multiplication(num1, num2) << endl;
    }else if(operat == "/"){
        cout << division(num1,num2) << endl;
    }else if (operat == "%"){
        cout << remainder(num1,num2)<< endl;
    }
}