#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums){
    vector<int> out;
    for(unsigned int i=0; i<nums.size(); ++i){
        int index = abs(nums[i]) - 1;
        if(nums[index] < 0){
            out.push_back(index + 1);
        }
        nums[index] = -nums[index];
    }
    return out;
}

int main () {
    vector<int> input  {4, 3, 2, 7, 8, 2, 3, 3};
    vector<int> out = findDuplicates(input);

    for(unsigned int i=0; i<out.size(); ++i){
        cout << out[i] << " ";
    }
    cout << endl;


}
