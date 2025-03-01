class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
      vector<string> ans;
        int ptr = 0;
        stack<int> st;
        for(int i = 1; i <= n; i++) {
            st.push(i);
            if(ptr == target.size()){
                 break;
            }
            ans.push_back("Push");
            if(st.top() == target[ptr]){
               
                 ptr++;
            }
            else{
                 st.pop();
                 ans.push_back("Pop");
            }
        }

        return ans;
    }
};