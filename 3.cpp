class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> a;
        int max = 0,j=0,i =0;
        int q = s.size();
        while(i<q && j<q){
            auto w = find(a.begin(), a.end(),s[j]);
            if( w==a.end() ){
                a.push_back(s[j]);
                j++;
                if(max<a.size()){
                    max = a.size();}
            } else {
                w++;
                a.erase(a.begin(), w);
                i++;
            } 
        }
        return max;
    }
};
