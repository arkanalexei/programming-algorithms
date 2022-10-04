// Problem: Given a number n, return pascal's triangle of height n.
// example pascals's triagnle og height 5
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

#include<bits/stdc++.h>
using namepsace std;

class Solution {
public:
    vector<int> getRow(vector<int> pre){
        pre.push_back(1);
        int v = pre[0], t;
        for(int i=1; i<pre.size()-1; i++){
            t = pre[i];
            pre[i] += v;
            v = t;
        }
        return pre;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> pre = {1};
        ans.push_back(pre);
        for(int i=1; i<numRows; i++){
            pre = getRow(pre);
            ans.push_back(pre);
        }
        return ans;
    }
};

int main(){
  Solution s = Solution();
  vector<vector<int>> triangle = s.generate(5);
  for( auto row:  triangle){
    for( int k: row)cout<< k <<" ";
    cout<<"\n";
  }
  return 0;
}

