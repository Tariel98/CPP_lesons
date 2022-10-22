#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int nums[10];
    int sumNums;
    cout << "Pleas enter 10 numbers: " << endl;

    for (int i = 0; i < 10; ++i){
        cin >> nums[i];
    }
    
    for (int i = 0; i < 10; ++i){
        sumNums += nums[i];
    }

    int arrayLength = sizeof(nums) / sizeof(int);
    int average = sumNums / arrayLength;

    int aboveOrEqualScores = 0;
    int bellowScores = 0;

    for (int i = 0; i < 10; ++i){
        if (nums[i] >= average){
            aboveOrEqualScores += 1;
        }else if (nums[i] < average){
            bellowScores += 1;
        }
    }   

    cout << "The number of scores above or equal to the average is " << aboveOrEqualScores << "." << endl;
    cout << "The number of scores below the average is " << bellowScores << "." << endl;
}

    


