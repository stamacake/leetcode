/*
560. Subarray Sum Equals K
Medium

Given an array of integers and an integer k, you need to find the total number of continuous subarrays whose sum equals to k.

Example 1:
Input:nums = [1,1,1], k = 2
Output: 2
Note:
The length of the array is in range [1, 20,000].
The range of numbers in the array is [-1000, 1000] and the range of the integer k is [-1e7, 1e7].
*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0, n=0;
        map<int,int> hash;
        hash.insert ( pair<int,int>(0,1));
        
        for(int i=0;i<nums.size();i++){
            n +=nums[i];
            auto it= hash.find(n-k);
            if(it!=hash.end()){
                count+=it->second;
            }
            it = hash.find(n);
            if(it!=hash.end()){
                it->second++;
            } else hash.insert ( pair<int,int>(n,1));
            
        }
        return count;
    }
};

/*
Runtime: 76 ms, faster than 35.08% of C++ online submissions for Subarray Sum Equals K.
Memory Usage: 12.1 MB, less than 77.33% of C++ online submissions for Subarray Sum Equals K.
*/
