/*
9. Palindrome Number

Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        int q = s.size();
        for(int i=0;i<q/2;i++){
            if(s[i]!=s[q-i-1]){
                return false;
            }
        }
        return true;
    }
};


/*
Runtime: 24 ms, faster than 17.33% of C++ online submissions for Palindrome Number.
Memory Usage: 5.9 MB, less than 100.00% of C++ online submissions for Palindrome Number.
*/
