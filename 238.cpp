/*
238. Product of Array Except Self
Medium

Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Example:

Input:  [1,2,3,4]
Output: [24,12,8,6]
Constraint: It's guaranteed that the product of the elements of any prefix or suffix of the array (including the whole array) fits in a 32 bit integer.

Note: Please solve it without division and in O(n).

Follow up:
Could you solve it with constant space complexity? (The output array does not count as extra space for the purpose of space complexity analysis.)
*/

/*
Algorithm from leetcode solution

1. Initialize the empty answer array where for a given index i, answer[i] would contain the product of all the numbers to the left of i.
2. We construct the answer array the same way we constructed the L array in the previous approach. These two algorithms are exactly the same except that we are trying to save up on space.
3. The only change in this approach is that we don't explicitly build the R array from before. Instead, we simply use a variable to keep track of the running product of elements to the right and we keep updating the answer array by doing answer[i] = answer[i] * Ranswer[i]=answer[i]∗R. For a given index i, answer[i] contains the product of all the elements to the left and R would contain product of all the elements to the right. We then update R as R = R * nums[i]R=R∗nums[i]
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length = nums.size();
        vector<int> ans;
        ans.push_back(1);
        for(int i=1;i<length;i++){
            ans.push_back(ans[i-1]*nums[i-1]);
        }
        int r = 1;
        for(int i=length-1;i>=0;i--){
            ans[i] = ans[i]*r;
            r *=nums[i];
        }
        return ans;
    }
};

/*
Runtime: 44 ms, faster than 26.29% of C++ online submissions for Product of Array Except Self.
Memory Usage: 10.8 MB, less than 100.00% of C++ online submissions for Product of Array Except Self.
*/
