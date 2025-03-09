class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       queue<int> q;
        for (int i = 0; i < tickets.size(); i++) {
            q.push(tickets[i]);
        }
        int cnt = 0;
        while (true) {
            int f = q.front();
            q.pop();

            if (f > 0) {
                cnt++;
                f--;

                if (k == 0 && f == 0) {
                    break;
                }
            }

            if (f > 0) {
                q.push(f);
            }

             k--;
            if (k < 0) {
                k = q.size() - 1;
            }
        }

        return cnt;
    }
};