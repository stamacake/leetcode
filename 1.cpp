class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            map<int, int> m;
        for(int i=0;i<nums.size();i++){
            
            int a = target - nums[i];
            if(m.find(a)!= m.end()){
                return vector<int> {i,m.at(a)};
            }
            m.insert ( pair<int,int>(nums[i],i) );
        }
        
        return nums;
    }
};
