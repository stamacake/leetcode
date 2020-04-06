/*
Given an array of strings, group anagrams together.

Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
Note:

All inputs will be in lowercase.
The order of your output does not matter.
*/



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size()==0) return {};
        map<string, vector<string>> anags;
        for(string it:strs){
            string orig = it;
            sort(it.begin(), it.end());
            if(anags.find(it) == anags.end()){
                vector<string> tm = {orig};
                 anags.insert(pair<string,vector<string>>(it,tm) );
            } else {
                anags[it].push_back(orig);
            }
        }
         vector<vector<string>> ret;
        for( auto const& [key, val] : anags ){
            ret.push_back(val);
        }
        return ret;
    }
};


/*
Runtime: 100 ms, faster than 15.64% of C++ online submissions for Group Anagrams.
Memory Usage: 17.7 MB, less than 95.52% of C++ online submissions for Group Anagrams.
*/
