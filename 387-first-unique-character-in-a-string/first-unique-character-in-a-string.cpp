class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;
        queue<int> q;
        int n=s.length();
        for (int i = 0; i < s.length(); i++) {
            freq[s[i]]++;
        }
        for (int i = 0; i < s.length(); i++) {
            if(freq[s[i]]==1){
                   q.push(i);
            }
        }
         if (!q.empty()) {
            return q.front();
         }
         return -1;
    }
};