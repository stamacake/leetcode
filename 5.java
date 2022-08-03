class Solution {
    public String longestPalindrome(String s) {
        
        if (s==null || s.length()==1) return s;
        // go throw all possible centres
        int l =0;
        int r = 0;
        for(int i =0; i<s.length()-1; ++i){
            // 2 cases:
            // in letter
            // and between
            int l1 = checkPalindrome(s,i,i); //in
            int l2 = checkPalindrome(s,i,i+1); // out
            
            
            int m = l1>=l2?l1:l2;
            if (m > r-l+1){
                 l = i - (m-1)/2;
                 r = i + m/2;
            }
        }
        
        return s.substring(l,r+1);
    }
        
        private static int checkPalindrome(String str, int l, int r){
            int ll= l;
            int rr = r;
            
            while((ll>=0 && rr<str.length() && str.charAt(ll)==str.charAt(rr)) ){
                --ll;
                ++rr;
            }
            
            return rr-ll-1;
        }
        
    
}
