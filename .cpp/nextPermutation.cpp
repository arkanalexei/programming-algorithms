// Problem: Find The next permutation of an array of integers. Permutation is the next lexicographically greater permutation of its integer. 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        vector<int> dq;
        int len = nums.size();
        dq.push_back(nums[len -1 ]);
        int sz = 1;
        bool flag = true;
        int i= len -2;
        while(i >= 0 && flag ){
            if(dq[sz-1] > nums[i]){ // if nums[i] is lesser than any eleent of dq
                int st = 0, end = sz-1, mid;
                int ind=0;
                while(st <= end){
                    mid = (st+end)/2;
                    if(nums[i] >= dq[mid]) st = mid+1;
                    else {
                        ind = mid;
                        end = mid-1;
                    }
                }
                int temp = dq[ind];
                dq[ind] = nums[i];
                nums[i] = temp;
                i++;
                for(int j=0; j<sz; j++){
                    nums[i] = dq[j];
                    i++;
                }
                flag = false;
                
            }
            else{ // insert nums[i] in dq in it's right position
                int st = 0, end = sz-1, mid, ind = 0;
                while(st <= end){
                    mid = (st+end)/2;
                    if(nums[i] >= dq[mid]){
                        ind = mid;
                        st = mid+1;
                    } 
                    else if(nums[i] < dq[mid]){
                        end = mid-1;
                    } 
                }
                dq.insert(dq.begin()+ ind+1, nums[i]);
                sz++;
            } 
            i--;
        }
        if(flag) reverse(nums.begin(), nums.end());
        return;
    }
};

int main(){
  Solution sol = Solution();
  vector<int> nums = {1, 2, 3};
  sol.nextPermutation(nums);
  for(int k: nums) cout<< k<<" ";
  return 0;
}

