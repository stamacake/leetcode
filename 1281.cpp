/*
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul=1;
        int sum=0;
        while(n>0){
            int tmp =n%10;
            mul *=tmp;
            sum += tmp;
            n/=10;
        }
        
        return mul-sum;
    }
};


/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.
Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for Subtract the Product and Sum of Digits of an Integer.
*/
