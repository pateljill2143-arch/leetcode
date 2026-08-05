class Solution {
public:
    int search(vector<int>& nums, int target) {
        bool f=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
               return i;
               f=true;
                
            }
        }
        if(f==false)
        {
            return -1;
        }
        return {};
    }
};