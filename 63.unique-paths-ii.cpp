class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& gg) {
        int r = gg.size();
        int c = gg[0].size();
        
        int dp[r][c];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<c;i++){
            if(gg[0][i] == 1)
                break;
            dp[0][i] = 1;
        }
        
        for(int i=0;i<r;i++){
            if(gg[i][0] == 1)
                break;
            dp[i][0] = 1;
        }
        
        
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                if(gg[i][j] == 1){
                    dp[i][j] = 0;
                }else{
                    dp[i][j] = (dp[i-1][j] + dp[i][j-1]);
                }
                
            }
        }
        return dp[r-1][c-1];
    }
};