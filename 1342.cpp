/*
Given a non-negative integer num, return the number of steps to reduce it to zero.
If the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
*/

class Solution {
public:
    int numberOfSteps (int num) {
        int n=0;
        while (num!=0){
            if(num%2==0){
                num/=2;
                n++;
            } else {
                num -=1;
                n++;
            }
        }
        return n;
    }
};

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
Memory Usage: 5.9 MB, less than 100.00% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
*/
