class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int n=chars.size();
        int write=0;
        
        while(i<n){
            char currch=chars[i];
            int cnt=0;
            while(i<n && chars[i]==currch){
                cnt++;
                i++;
            }

            chars[write]=currch;
            write++;
            if(cnt>1){
                string dig=to_string(cnt);
                for(char ch:dig){
                    chars[write]=ch;
                    write++;
                }
            }
        }
        return write;
    }
};
