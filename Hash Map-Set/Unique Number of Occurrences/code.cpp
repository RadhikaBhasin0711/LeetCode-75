class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto i:arr) mp[i]++;
        vector<int>freq;
        for(auto i:mp) freq.push_back(i.second);
        sort(freq.begin(),freq.end());
        for(int i=1;i<freq.size();i++){
            if(freq[i]==freq[i-1]) return false;
        }
        return true;
    }
};
