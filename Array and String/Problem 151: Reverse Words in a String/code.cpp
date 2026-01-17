class Solution {
public:
    string reverseWords(string s) {
        vector<string> wrds;
        stringstream ss(s);
        string word;
        while(ss>>word){
            wrds.push_back(word);
        }
        int i=0;
        int j=wrds.size()-1;
        while(i<j){
            swap(wrds[i],wrds[j]);
            i++;
            j--;
        }
        string res="";
        for(int i=0;i<wrds.size();i++){
            if(!res.empty()) res+=" ";
            res+=wrds[i];
        }
        return res;
    }
};
