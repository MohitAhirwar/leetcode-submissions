class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size(),ans=0,m = nums[0];
        for(int i=1;i<n;i++) m |= nums[i];
        int k = 1 << n;
        for(int i=0;i<k;i++){
            int j = i,c=0,l=0;
            while(j > 0){
                if(j&1){
                    c |= nums[l];
                }
                l++;
                j = j>>1;
            }
            if(c==m) ans++;
        }
        return ans;
    }
};