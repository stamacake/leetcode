/*
200. Number of Islands
Medium

Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. An island is surrounded by water 
and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are 
all surrounded by water.

Example 1:

Input:
11110
11010
11000
00000

Output: 1
Example 2:

Input:
11000
11000
00100
00011

Output: 3
*/

class Solution {
public:
    
    void check(int a, int b,vector<vector<char>>& grid, int w, int h, int f){
            int k = a;
            int l = b;
        
            if(l+1<w){ //right
                if(grid[k][l+1]=='1') { 
                    grid[k][l+1] = f+ '0';
                    check(k,l+1, grid, w, h, f);
                }
            }
            
            if(k+1<h){ //down
                if(grid[k+1][l]=='1') { 
                    grid[k+1][l] = f+ '0';
                    check(k+1,l, grid, w, h, f);
                }
            }
            if(l-1>-1){ //left
                if(grid[k][l-1]=='1') { 
                    grid[k][l-1] = f+ '0';
                    check(k,l-1, grid, w, h, f);
                }
            }   
            if(k-1>-1){ //up
                if(grid[k-1][l]=='1') { 
                    grid[k-1][l] = f+ '0';
                    check(k-1,l, grid, w, h, f);
                }
            }

        
                    
    }
    
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0) return 0;
        int f =2;
        int h=grid.size();
        int w = grid[0].size();
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){

                
                
                if(grid[i][j]=='1') {
                    grid[i][j]=f+ '0';
                    check(i,j, grid, w, h, f);
                    f++;
                }
            }
        }

        
        
        return f-2;
    }
};

/*
Runtime: 12 ms, faster than 90.99% of C++ online submissions for Number of Islands.
Memory Usage: 8.4 MB, less than 100.00% of C++ online submissions for Number of Islands.
*/
