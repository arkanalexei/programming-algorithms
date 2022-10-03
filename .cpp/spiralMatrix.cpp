// Problem: Given an m x n matrix, return all elements of the matrix in spiral order.

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int R = matrix.size(), C = matrix[0].size();
        vector<int> spiral;
        int total = R*C;
        int r=0, c=0;
        while(spiral.size() < total){
            
            for(int j=c; j<C; j++){
                spiral.push_back(matrix[r][j]);
            }
            if(spiral.size() == total) return spiral;
            for(int j=r+1; j<R; j++){
                spiral.push_back(matrix[j][C-1]);
            }
            if(spiral.size() == total) return spiral;
            for(int j= C-2; j>= c; j--){
                spiral.push_back(matrix[R-1][j]);
            }
            if(spiral.size() == total) return spiral;
            for(int j=R-2; j>r; j--){
                spiral.push_back(matrix[j][c]);
            }
            
            r++;
            c++;
            R--;
            C--;
        }
        return spiral;
    }
};

int main(){
  vector<vector<int>> matrix {{21,21,48},
                                 {14,50,65},
                                 {17,81,90}};
  vector<int> spiral;
  Solution s = Solution();
  spiral = s.spiralOrder(matrix);
  for( int num: spiral ) cout<< num <<" ";
  cout<<endl;
  return 0;
}
