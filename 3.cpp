class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> a;
        int max = 0;
        int j=0;
        int i =0;
        while(i<s.size() && j<s.size()){
            bool isin = a.find(s[j]) != a.end();
            if(!isin){
                a.insert(s[j]);
                j++;
                if(max<a.size()){
                    max = a.size();}
            } else {
                a.erase(s[i]);
                i++;
            } 
        }
        return max;
    }
};
