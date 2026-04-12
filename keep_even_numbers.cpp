#include <iostream>
#include <vector>
using namespace std;

int keepEvenNumbers(vector<int>& nums){
    int k = 0;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] % 2 == 0){
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main(){
    vector<int> nums = {3, 4, 3, 6, 8, 3};

    int result = keepEvenNumbers(nums);

    cout << result << endl;

    for(int i = 0; i < result; i++){
        cout << nums[i] << " ";
    }

    return 0;
}