/*
Perform String Shifts

You are given a string s containing lowercase English letters, and a matrix shift, where shift[i] = [direction, amount]:

direction can be 0 (for left shift) or 1 (for right shift). 
amount is the amount by which string s is to be shifted.
A left shift by 1 means remove the first character of s and append it to the end.
Similarly, a right shift by 1 means remove the last character of s and add it to the beginning.
Return the final string after all operations.

Example 1:

Input: s = "abc", shift = [[0,1],[1,2]]
Output: "cab"
Explanation: 
[0,1] means shift to left by 1. "abc" -> "bca"
[1,2] means shift to right by 2. "bca" -> "cab"
*/

class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int l=0;
        int r=0;
        for(int i = 0;i<shift.size();i++){
            if(shift[i][0]==0){
                l +=shift[i][1];
            } else r +=shift[i][1];
        }
        int sum = (l>=r)?(l-r):(r-l);
        bool x = (l>=r)?1:0;
        int tmp = sum%s.size();
        if(x){
            for(int i=0;i<tmp;i++){
                s.push_back(s[0]);
                s.erase(s.begin());
            }
            
        } else {
            for(int i=0;i<tmp;i++){
                s.insert(s.begin(),s[s.size()-1]);
                s.pop_back();
            }          
        }
      return s;  
    }
};

/*
Runtime: 4 ms
Memory Usage: 6.8 MB
not enough data at the time of publication
*/
