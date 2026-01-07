class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int s=candies.size();
        int maxi=INT_MIN;
        for(auto n:candies){
            if(n>maxi){
                maxi=max(maxi,n);
            }
        }

        for(int i=0;i<s;i++){
            if(candies[i]+extraCandies>=maxi) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
                                                                                                                                        
    }
};
