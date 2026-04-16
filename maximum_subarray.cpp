#include <iostream>
#include <vector>

using namespace std;
int maxSubArray(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int x=nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(x<0){
                x=nums[i];
            }
            else{
                x+=nums[i];
            }
            if(x>sum){
                sum=x;
            }
        }
        return sum;
    }
    int main(){
        vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
        int result=maxSubArray(nums);
        cout<<result<<endl;
        return 0;
    }