class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        int totalSum = 0;

        for(int i =0; i<len ; i++){
            totalSum += nums[i];
        }

        int leftSum = 0;

        for(int i=0; i<len; i++){
            int right=totalSum-leftSum-nums[i];
            

            if(right == leftSum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};
