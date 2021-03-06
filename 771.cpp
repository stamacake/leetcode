/*
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.
Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters.
Letters are case sensitive, so "a" is considered a different type of stone from "A".
*/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
            for(int i=0;i<S.size();i++){
                for(int j=0;j<J.size();j++){
                    if(S[i]==J[j]){
                        count++;
                        break;
                    }
                }
            }
        return count;
    }
};

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Jewels and Stones.
Memory Usage: 6.4 MB, less than 100.00% of C++ online submissions for Jewels and Stones.
*/
