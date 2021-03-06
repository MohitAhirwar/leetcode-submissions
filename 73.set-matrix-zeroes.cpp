class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> vp;
        int r = matrix.size();
        int c = matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j] == 0){
                    vp.push_back({i,j});
                }
            }
        }
        
        for(auto &k : vp){
            int a = k.first;
            int b = k.second;
            
            for(int p=0;p<r;p++){
                matrix[p][b] = 0;
            }
            
            for(int p=0;p<c;p++){
                matrix[a][p] = 0;
            }
        }
        
    }
};