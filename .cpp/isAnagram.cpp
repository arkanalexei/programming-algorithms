// Problem: Find given strings s and t are valid anagrams of each other or not.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp1, mp2;
        for(char c: s){
            mp1[c]++;
        }
        for(char c: t){
            mp2[c]++;
        }
        if(mp1.size() !=  mp2.size())return false;
        for(auto pair: mp1){
            if(pair.second != mp2[pair.first]) return false;
        }
        return true;
    }
};

int main(){
    string s = "attaboy", t="boyatta";
    Solution sol = Solution();
    cout<< sol.isAnagram(s, t);
    return 0;
}
