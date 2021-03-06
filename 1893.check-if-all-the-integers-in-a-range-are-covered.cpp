class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        set<int> s;
        for(int i=0;i<ranges.size();i++)
        {
            for(int j=ranges[i][0];j<=ranges[i][1];j++)
            {
                s.insert(j);
            }
        }
        for(int k=left;k<=right;k++)
        {
            if(s.find(k) == s.end())
                return false;
        }
        return true;
    }
};