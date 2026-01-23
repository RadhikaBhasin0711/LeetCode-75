class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int mx=0;
        int l=0,r=0;
        int len=0;
        int zer=0;
        while(r<n){
            if(nums[r]==0){
                zer++;
            }
            while(zer>1){
                if(nums[l]==0){
                    zer--;
                } 
                l++;
            }
            if(zer<=1){
                len=r-l;
                mx=max(mx,len);
            }
            r++;
        }
        return mx;
    }
};
