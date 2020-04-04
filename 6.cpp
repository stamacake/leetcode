class Solution {
public:
    string convert(string s, int numRows) {
        string tmp="";
        int si = s.length();
        if(numRows==1) return s;
        for(int i=0;i<numRows;i++){
            int j=0;
            if(i==0 || i==numRows-1){
                while(j+i<si){
                    tmp += s[j+i];
                    j += 2*numRows-2;
                } 
            }else {
                while(i+j<si ){
                tmp += s[j+i];
                    if(2*numRows-2-i+j<si)
                tmp += s[2*numRows-2-i+j];
                j += 2*numRows-2;
                }
                
            }
       }
        return tmp;
    }
    
};
