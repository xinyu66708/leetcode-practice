#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums){
    int k=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            nums[k]=nums[i];
            k++;
        }
    }
    for(int i = k; i < nums.size(); i++){
        nums[i] = 0;
}
}
int main(){
    vector<int>nums={0,4,0,6,8,3};
    moveZeroes(nums);
    for(int i=0;i<nums.size();i++){
         cout<<nums[i]<<" ";
    }
    return 0;
}