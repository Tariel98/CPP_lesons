#include <iostream>
using namespace std;


void myFunction( string name = "Karen", int age = 15) {

    cout << name << " is parametr" << " and " << age << " is age" << endl;
}


int myFunc(int num1, int num2){
    return num1 + num2;
}

int mySwapNum(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int main() {
    
  string text = "food";
  string* food = &text;

cout << text << endl;
  cout << &text << endl;
  cout << food << endl;
 cout << *food << endl;

cout << "__________________________Urish banic heto ___________________________________" << endl;
 *food = "Urish ban";

 cout << "food: " << food<< endl;
 cout << "text: "<< text << endl;
 cout << "*food: " << *food << endl;

 cout << "__________________Function vizov_____________________________________" << endl;

myFunction("Tariel", 24);
myFunction("Hasmik", 20);
myFunction();

cout << "_____________________________myFunc______________________________________" << endl;

cout << myFunc(15,17) << endl;

cout << "______________________________Swaping_____________________________________ " << endl;

int firstNum = 10;
int secondNum = 20;

cout << firstNum << secondNum << endl;

mySwapNum(firstNum, secondNum);

cout << firstNum << secondNum << endl;


}

