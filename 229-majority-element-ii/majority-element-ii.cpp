class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j])
                    count++;
            }

            if (count > n / 3) {
                bool alreadyAdded = false;

                for (int x : ans) {
                    if (x == nums[i]) {
                        alreadyAdded = true;
                        break;
                    }
                }

                if (!alreadyAdded)
                    ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};