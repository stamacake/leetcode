/*
221. Maximal Square
Medium

Given a 2D binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.
*/

/* dp leet solution
We initialize another matrix (dp) with the same dimensions as the original one initialized with all 0’s.

dp(i,j) represents the side length of the maximum square whose bottom right corner is the cell with index (i,j) 
in the original matrix.

Starting from index (0,0), for every 1 found in the original matrix, we update the value of the current element as

dp(i, j) = min(dp(i-1, j), dp(i-1, j-1), \dp(i, j-1)) + 1.dp(i,j)=min(dp(i−1,j),dp(i−1,j−1),dp(i,j−1))+1.

We also remember the size of the largest square found so far. In this way, we traverse the original matrix once 
and find out the required maximum size. This gives the side length of the square (say maxsqlenmaxsqlen). 
The required result is the area maxsqlen^2.
*/



class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        int cols=0;
        if(rows!=0){
            cols = matrix[0].size();
        }
        vector<vector<int>> dp(rows+1, vector<int>(cols+1, 0));
        
        int ans=0;
        
      
        for(int i=1;i<=rows;i++){
            for(int j=1;j<=cols;j++){
                if(matrix[i-1][j-1]=='0'){
                    dp[i][j] = 0;
                }
               if(matrix[i-1][j-1]=='1'){
                   dp[i][j]=std::min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1])) + 1;
                   ans = std::max(ans,dp[i][j]);
               }
                
            }            
        }        
     return ans*ans;   
    }
};
