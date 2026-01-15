class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int maxi=INT_MIN;
        
        while(l<r){
            int h=min(height[l],height[r]);
            int w=r-l;
            int cap=h*w;
            maxi=max(maxi,cap);

            if(height[l]>height[r]) r--;
            else l++;

        }
        return maxi;
    }
};
