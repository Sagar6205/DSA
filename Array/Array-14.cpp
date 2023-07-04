// 58 . Length Of Last Word (LeetCode)
#include<iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
      int n=s.size()-1;
      int count =0;
      
      while(s[n]==' '){
          n--;
          
      }
      
      while(n>=0 && s[n]!=' '){
          count++;
          n--;
      }
      return count;
    }
};