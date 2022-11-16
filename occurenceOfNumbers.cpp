#include <iostream>
using namespace std;

int main() {
    
  int digits[10] = {};
  int number;
  cout << "Please enter a number between 1 and 10։ \nEnter -1 to see results։ ";

  while(number != -1){
    cin >> number;
    if (number == -1)
      break;
    if (number < 1 || number > 10){
      cout << "Out of range 1 to 10:" << "\nContinue typing numbers from 1 to 10!" << endl;
      continue;}else if(number == 1){
      digits[0] += 1;}else if(number == 2){
      digits[1] += 1;}else if(number == 3){
      digits[2] +=1;}else if(number == 4){
      digits[3] += 1;}else if(number == 5){    
      digits[4] += 1 ;}else if (number == 6){
      digits[5] += 1;}else if (number == 7){   
      digits[6] += 1;}else if (number == 8){  
      digits[7] += 1;}else if (number == 9){
      digits[8] += 1;}else if (number == 10){
      digits[9] += 1;}
     }

     cout << "Is the count of entered digits:" << endl;
     cout << "\n";
     for (int i = 1; i < 11; ++i){
      for (int j = 0; j < 10; ++j){
        if (digits[i-1] == 0){
          continue;
        }else{
          cout << "The " <<  i << " number was entered " << digits[i-1] << " times."<< endl;
          break;
        }
      } 
      }
     }

