class Solution {
public:
    void helper(vector<vector<char>>& grid, int i, int j,vector<vector<int>>& visi){
        int rows=grid.size();
        int cols=grid[0].size();
        visi[i][j]=1;
        queue<pair<int,int>> q;
        q.push({i,j});
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int dr=-1;dr<=1;dr++){
                for(int dc=-1;dc<=1;dc++){
                    if(dc!=dr){
                        int nr=r+dr;
                        int nc=c+dc;
                        if(nr>=0 && nr<rows && nc>=0 && nc<cols && grid[nr][nc]=='1' && visi[nr][nc]==0){
                            visi[nr][nc]=1;
                            q.push({nr,nc});
                        }
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>> visi(r,vector<int> (c));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                visi[i][j]=0;
            }
        }
        int cnt=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(visi[i][j]!=1 && grid[i][j]=='1'){
                    cnt++;
                    helper(grid,i,j,visi);
                }
            }
        }
        return cnt;
    }
};