#include <iostream>
using namespace std;

int main()
{
    int arr[10], length=10,  elem,  found=0;
    cout<<"Enter 10 array numbers: ";
    for(int i = 0; i < length; ++i)
        cin >> arr[i];
    cout << "\nEnter element to delete: ";
    cin >> elem;

    for(int i = 0; i < length; ++i)
    {
        if(arr[i] == elem)
        {
            for(int j=i; j<(length-1); ++j)
                arr[j] = arr[j+1];
            found++;
            i--;
            break;
        }
    }
    arr[9] = 0;

    if(found == 0)
        cout << "\nElement doesn't found in the Array!" << endl;
    else{
        cout << "\nElement Deleted Successfully!";
    cout << endl;
    cout << endl;

    cout << "Element deleted array is : ";
    for (int n: arr){
      cout << n << " ";
    }
    cout << endl;
    }
}