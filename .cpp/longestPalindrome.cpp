// Problem: Find Longest Palindromic substring
// input string consist of only digits and English letters.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getPalindrome(string &s,int i, int j){
        int len = s.length();
        int maxLen =1;
        string str = s.substr((i+j)/2, maxLen);
        while(i>=0 && j <len){
            if(s[i] != s[j]) break;
            maxLen = j-i+1;
            str = s.substr(i, maxLen);
            i--;
            j++;
        }
        return str;
    }
    string longestPalindrome(string s) {
        int len = s.length();
        string palindrome =s.substr(0, 1);
        for(int i=0; i<len; i++){
            
            string temp =getPalindrome(s, i-1, i+1);
            if( temp.length() > palindrome.length()) palindrome = temp;
            
            temp = getPalindrome(s, i, i+1);
            if(temp.length() > palindrome.length() ) palindrome = temp;
        }
        return palindrome;
    }
};

int main(){
  string s = "attaboy";
  Solution sol = Solution();
  cout<< sol.longestPalindrome( s );
  return 0;
}


