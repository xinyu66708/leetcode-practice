#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int>& nums){
    if(nums.empty()){
        return 0;
    }
     int minx=nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]<minx){
            minx=nums[i];
        }
    }
    return minx;

}
int main(){
    vector<int> nums={2,4,2,1,4,6,3};
    int result=findMin(nums);
    cout<<result<<endl;
    return 0;
}
