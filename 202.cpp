/*
Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Example: 

Input: 19
Output: true
Explanation: 
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1
*/


class Solution {
public:
    int inqu(int x){
        int sum=0;
        while(x!=0){
            sum += (x%10)*(x%10);
            x /=10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        vector<int> tmp;
        while(find(tmp.begin(), tmp.end(), n) == tmp.end()){
        tmp.push_back(n);
        n = inqu(n);
        }
        if(find(tmp.begin(), tmp.end(), 1) != tmp.end()){
            return true;
        } else return false;
    }
};


/*
Runtime: 4 ms, faster than 52.05% of C++ online submissions for Happy Number.
Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for Happy Number.
*/
