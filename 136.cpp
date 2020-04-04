class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, bool> tmp;
        for(int i=0;i<nums.size();i++){
            auto it = tmp.find(nums[i]);
            if(it == tmp.end()){
                tmp.insert(make_pair(nums[i], false));
            } else {
                it->second = true;
            }
        }
        for(auto const& [key, val] : tmp){
            if(val==false) return key;
        }
        return 4;
    }
};
