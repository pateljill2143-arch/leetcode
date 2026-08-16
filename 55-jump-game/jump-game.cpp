class Solution {
public:
    bool canJump(vector<int>& nums) {
        int A = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > A)
             return false;
            A = max(A, i + nums[i]);
        }
        return true;
    }
};
