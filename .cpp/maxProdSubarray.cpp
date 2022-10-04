// Problem: Find the maximum product of subarray

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int preMax = nums[0], preMin = nums[0];
        int ans= nums[0];
        for(int i=1; i<nums.size(); i++){
            int temp = preMax;
            preMax = max(nums[i], max(preMax*nums[i], preMin*nums[i]));
            preMin = min(nums[i], min(preMin*nums[i], temp*nums[i]));
            ans = max(ans, preMax);
        }
        return ans;
    }
};

int main(){
    Solution s = Solution();
    vector<int> nums {1, 4, 2, 5, -2, 4, -4};
    cout<< s.maxProduct(nums);
    return 0;
}
