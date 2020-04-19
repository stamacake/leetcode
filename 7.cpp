/*
7. Reverse Integer
Easy

Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range:
[−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
*/

class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        if(x>=0){
            std::reverse(s.begin(),s.end());
        }
        if(x<0){
            std::reverse(s.begin()+1,s.end());
        }

        
        long a = stol(s);
        if(a>=0){
            if(a>2147483647){
                return 0;
            } else
            return (int)a;
        } else {
            if(a<-2147483648){
                return 0;
        } else {
                return (int)a;
            }
        }
    }
};

/*
Runtime: 8 ms, faster than 51.08% of C++ online submissions for Reverse Integer.
Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for Reverse Integer.
*/
