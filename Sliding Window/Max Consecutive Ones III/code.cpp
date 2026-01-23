class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int mx=0;
        int l=0,r=0;
        int len=0;
        int zer=0;
        while(r<n){
            
            if(nums[r]==0){
                zer++;
            }
            while(zer>k){
                if(nums[l]==0){
                    zer--;
                } 
                l++;
            }
            if(zer<=k){
                len=r-l+1;
                mx=max(mx,len);
            }
            r++;
        }
        return mx;
    }
};
