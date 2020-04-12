/*
1046. Last Stone Weight
Easy

We have a collection of stones, each stone has a positive integer weight.

Each turn, we choose the two heaviest stones and smash them together.  Suppose the stones have weights x and y with x <= y.  The result of this smash is:

If x == y, both stones are totally destroyed;
If x != y, the stone of weight x is totally destroyed, and the stone of weight y has new weight y-x.
At the end, there is at most 1 stone left.  Return the weight of this stone (or 0 if there are no stones left.)
*/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int s = stones.size()-1;
        if(s==0) return stones[0];
        sort(stones.begin(), stones.end());
        while(s>0){
            if(stones[s-1]>=stones[s]){
                stones[s-1]=stones[s-1]-stones[s];
                stones.pop_back();
                s--;
            } else {
                if(stones[s-1]<stones[s]){
                    stones[s]=stones[s]-stones[s-1];
                    stones.erase(stones.begin()+s-1);
                    s--;
                }
            }
            sort(stones.begin(), stones.end());
        }
        
        return stones[0];
    }
};

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Last Stone Weight.
Memory Usage: 6.2 MB, less than 100.00% of C++ online submissions for Last Stone Weight.
*/
