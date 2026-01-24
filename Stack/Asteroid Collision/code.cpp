class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(auto i:asteroids){
            if(i>=0) st.push(i);          
            else{                                                          
                while(!st.empty() && st.top()>0 && abs(i)>st.top()){   
                    st.pop();                                          
                }
                if(!st.empty() && st.top()==abs(i)) st.pop();        
                else if(st.empty() || st.top()<0) st.push(i);        
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};
