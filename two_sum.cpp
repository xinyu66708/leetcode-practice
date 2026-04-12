#include <iostream>
#include <vector>
using namespace std;

// 这是我们写的函数
vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

// 主函数（程序入口）
int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    vector<int> v = {1, 2, 3};
    v.push_back(4);

    cout << v[3] << endl;

    cout << result[0] << " " << result[1] << endl;

    cout << result.size() << endl;

    return 0;
}