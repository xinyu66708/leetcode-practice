#include <iostream>
#include <vector>

using namespace std;

int findNumbers(vector<int>& nums) {
    if(nums.size()==0)
    return 0;
    int count=0;
    for(int i=0;i<nums.size();i++){
        int x=nums[i];
        int k=0;
        if(x==0){
            k=1;
        }else{
        while(x!=0){
            x=x/10;
            k++;           
        }}
        if(k%2==0){
            count++;
        }
    }
    return count;
    }
    int main(){
        vector<int> nums={123,432,45,4321,234,23,1};
        int result=findNumbers(nums);
        cout<<result<<endl;
        return 0;
    }