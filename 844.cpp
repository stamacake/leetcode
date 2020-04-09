/*
844. Backspace String Compare

Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.
*/

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int j=T.size()-1;
        int i=S.size()-1;
        int k=0;
        while (i>-1 || j>-1){
           
            while(i>-1){
                if(S[i]=='#'){
                   k++;
                    i--;
                } else {
                    if(k>0) {
                        k--;
                        i--;
                    } else break;
                }
            }
            k=0;
            while(j>-1){
                if(T[j]=='#'){
                    k++;
                    j--;
                } else {
                    if(k>0) {
                        k--;
                        j--;
                    } else break;
                }
            }   
            if((i>-1 && j<0)|| (i<0 && j>-1)){
                return 0;
            }
            if(i>-1 && j>-1 && S[i]!=T[j]){
                return 0;
            }
            i--;
            j--;
            }
        
          return true;
            
                
    }
        
    
};


/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Backspace String Compare.
Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for Backspace String Compare.
*/
