class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
         queue<int> q;
        for(int i = 0; i < students.size(); i++) {
            q.push(students[i]);
        }

        int count = 0;
        while (!sandwiches.empty() && !q.empty()) {
            if (q.front() == sandwiches[0]) {
                q.pop();
                sandwiches.erase(sandwiches.begin());
                count = 0;
            } else {
                int f = q.front();
                q.pop();
                q.push(f);
                count++;
            }

            if (count == q.size()) {
                break;
            }
        }

        return q.size();
    }
};