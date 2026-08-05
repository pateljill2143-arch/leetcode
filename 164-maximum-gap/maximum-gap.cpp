class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
       sort(nums.begin(),nums.end());
       int res=0;
       for(int i=1;i<n;i++)
       {
        res=max(res,nums[i]-nums[i-1]);
       }
        return res;
    }
};