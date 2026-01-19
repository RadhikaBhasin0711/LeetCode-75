class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curralt=0;
        int mxalt=0;
        for(auto i:gain){
            curralt+=i;
            mxalt=max(mxalt,curralt);
        }
        return mxalt;
    }
};
