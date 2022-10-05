// Problem: find the length of longest increasing subsequence

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dp;
    int n;
    void LIS(vector<int> &nums, int idx){
        if(idx>=n)return;
        dp[idx]=0;
        for(int i=idx-1; i>=0; i--){
            if(nums[idx] > nums[i])dp[idx] = max(dp[idx], dp[i]);
        }
        dp[idx]++;
        LIS(nums, idx+1);
        return ;
    }
    int lengthOfLIS(vector<int>& nums) {
        n = nums.size();
        dp = vector<int>(n, -1);
        dp[0]=1;
        LIS(nums, 1);
        return *max_element(dp.begin(), dp.end());
    }
};

int main(){
  Solution s = Solution();
  vector<int> nums {19,9,12,51,23,7,11,38};
  cout<< s.lengthOfLIS(nums);
  return 0;
}
