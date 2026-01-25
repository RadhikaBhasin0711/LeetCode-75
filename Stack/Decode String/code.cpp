class Solution {
public:
    string decodeString(string s) {
        stack<int> stackint;
        stack<string>stringst;
        string ans="";
        int num=0;
        for(auto ch:s){
            if(isdigit(ch)){
                num=num*10+(ch-'0');
            }
            else if(ch=='['){
                stackint.push(num);
                num=0;
                stringst.push(ans);
                ans="";
            }
            else if(ch==']'){
                int rep=stackint.top();
                stackint.pop();
                string prev=stringst.top();
                stringst.pop();
                string expended="";
                for(int i=0;i<rep;i++){
                    expended+=ans;
                }
                ans=prev+expended;
            }
            else ans+=ch;
        }
        return ans;
    }
};
