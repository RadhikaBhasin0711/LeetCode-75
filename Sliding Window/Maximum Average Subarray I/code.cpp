class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double s=0;
        for(int i=0;i<k;i++){
            s=s+nums[i];
        }
        double mxi=s/k;
        for(int i=k;i<n;i++){
            s=s-nums[i-k]+nums[i];
            mxi=max(mxi,s/k);
        }
        return mxi;
    }
};
