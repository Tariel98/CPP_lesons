#include <iostream>
using namespace std;


int main(){

    int points;
    cout << "Pleas enter yor points: " ;
    cin >> points;
    cout << "Attention, the evaluation is done in the following order: " << endl;
    cout << " 0-59 --> F,  60-69 --> D, 70-79 --> C, 80-89 --> B, 90-100 --> A" << endl;
    
    if ( 0 <= points && points <= 59 ){
        cout << "Your grade is F." << endl;
    }else if ( 60 <= points && points <= 69 ){
        cout << "Your grade is D." << endl; 
    }else if ( 70 <= points && points <= 79){
        cout << "Your grade is C." << endl;
    }else if ( 80 <= points && points <= 89){
        cout << "Your grade is B." << endl;
    }else if ( 90 <= points && points <= 100){
        cout << "Your grade is A." << endl;
    }else{
        cout << "You have entered incorrect points. Please enter points between 0 - 100!" << endl;
    }

}
