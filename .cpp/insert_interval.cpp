// Problem: Insert given interval in a sorted array of intervals

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int i=0, n = intervals.size();
        while(i<n){
            if( newInterval[0] > intervals[i][1] ){
                res.push_back(intervals[i]);
            }
            else{
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                while(i<n && newInterval[1] >= intervals[i][0] ){
                    newInterval[1] = max(newInterval[1], intervals[i][1]);
                    i++;
                }
                res.push_back(newInterval);
                res.insert(res.end(), intervals.begin()+i, intervals.end());
                i = n;
            }
            i++;
        }
        if( i != n + 1){
            res.push_back(newInterval);
        }
        return res;
    }
};

int main(){
  Solution s = Solution();
  vector<vector<int>> intervals {{1,2},{3,5},{6,7},{8,10},{12,16}};
  vector<int> newInterval {4, 8};
  intervals = s.insert(intervals, newInterval);
  for(auto p: intervals){
      for(int k: p) cout<< k << " ";
      cout<<endl;
  }
  return 0;
}
