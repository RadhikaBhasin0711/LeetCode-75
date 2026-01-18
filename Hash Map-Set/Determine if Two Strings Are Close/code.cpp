class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()) return false;
        unordered_map<int,int> mp1,mp2;
        set<char> s1,s2;
        for(auto i:word1) {
            mp1[i]++;
            s1.insert(i);
        }
        for(auto i:word2) {
            mp2[i]++;
            s2.insert(i);
        }
        if(s1!=s2) return false;
        vector<int> v1,v2;
        for(auto i:mp1) v1.push_back(i.second);
        for(auto i:mp2) v2.push_back(i.second);

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        return v1==v2;

    }
};
