/*
Given an array nums of integers, return how many of them contain an even number of digits.
*/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=0;
        for(int i=0;i<nums.size();i++){
           int t=0;
            while(nums[i]>0){
                nums[i]/=10;
                t++;
            }
            if(t%2==0)n++;
        }
        return n;
    }
};

/*
Runtime: 8 ms, faster than 68.36% of C++ online submissions for Find Numbers with Even Number of Digits.
Memory Usage: 9.8 MB, less than 100.00% of C++ online submissions for Find Numbers with Even Number of Digits.
*/
