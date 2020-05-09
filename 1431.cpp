/*
Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.

For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the 
greatest number of candies among them.
Notice that multiple kids can have the greatest number of candies.
*/
/*
Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true] 
*/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
           
        int max = *max_element(candies.begin(), candies.end());
         vector<bool> ans;
        for(int x:candies){
            if(x+extraCandies>=max) ans.push_back(true);
            else ans.push_back(false);
        }
       
        return ans;
    }
};

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Kids With the Greatest Number of Candies.
Memory Usage: 9.2 MB, less than 100.00% of C++ online submissions for Kids With the Greatest Number of Candies.
*/
