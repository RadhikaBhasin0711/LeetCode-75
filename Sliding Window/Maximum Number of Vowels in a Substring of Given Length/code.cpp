class Solution {
public:
    bool isvow(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
        return false;
    }
    int cnt=0;
    int maxVowels(string s, int k) {
        for(int i=0;i<k;i++){
            if(isvow(s[i])) cnt++;
        }
        int mxi=cnt;
        for(int i=k;i<s.length();i++){
            if(isvow(s[i-k])) cnt--;
            if(isvow(s[i])) cnt++;
            mxi=max(mxi,cnt);
        }
        return mxi;
    }
};
