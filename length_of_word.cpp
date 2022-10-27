#include <iostream>
using namespace std;

int main() {

   char word[100];
   char* ptr;
   int length = 0;

   cout << "Pleas enter the word: ";
   cin >> word;

   ptr = word;
   
   while (*ptr != '\0') {
      length++;
      ptr++;
   }
   cout << "The length of word is: " << length << endl;
   return 0;
}