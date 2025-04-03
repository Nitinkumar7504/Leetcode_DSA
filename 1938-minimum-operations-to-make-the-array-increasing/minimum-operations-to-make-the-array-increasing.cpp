class Solution {
public:
    int minOperations(vector<int>& nums) {
           int op = 0;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] <= nums[i - 1]) {
            int inc = nums[i - 1] - nums[i] + 1;
            op += inc;
            nums[i] = nums[i - 1] + 1;  
        }
    }
    return op;
    }
};