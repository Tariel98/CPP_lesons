#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >>n;
    int arr[n];
    vector<int> nums;
    for (int i=0; i<n; ++i) cin >> arr[i];   

    int  max = arr[n-1];
    for(int i=n-1; i>=0; --i){
        if (arr[i] >= max){
            max = arr[i];
            nums.push_back(max);
        }
    }

    reverse(nums.begin(), nums.end());

    for (int i=0; i< nums.size(); i++)
        cout << nums[i] << " ";

}
