#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    if(prices.empty()){
        return 0;
    }
     int mini=prices[0];
     int profit=0;
    for(int i=0;i<prices.size();i++){
         if(mini>prices[i]){
            mini=prices[i];
         }else{
            int sum=prices[i]-mini;
            if(sum>profit){
                profit=sum;
            }
         }
    }
    return profit;
}
    int main(){
        vector<int> prices={2,4,3,1,7,6,2};
        int result=maxProfit(prices);
        cout<<result<<endl;
        return 0;
    }