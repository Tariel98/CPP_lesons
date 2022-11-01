#include <iostream>
using namespace std;

int majElem(int arr[], int n){

    int maj=0, count=1;

    for(int i=1; i<n; i++){
        if (arr[maj] == arr[i]){
            count++;
        }
        else{
         count--;
        }

        if (count == 0){
            maj = i;
            count = 1;
        }
    }
    return arr[maj];
}

bool review (int arr[], int n, int cand){

    int count = 0;

    for (int i=0; i<n; i++){
        if (arr[i] == cand){
            count++;
        }
    }

      if (count > n/2){
          return true;
      }else { 
          return false;
      }
}



int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    int arr[n];
    cout << "Enter Arr Elements: ";
    for (int i=0; i<n; i++) cin >> arr[i];
    
   int cand =  majElem(arr, n);
   if(review( arr, n,  cand)){ cout << cand << endl;}
   else {cout << -1 << endl;} 
}
