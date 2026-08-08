class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
           
            for(int j=0;j<nums.size()-1;j++)
            {   
                 int temp=0;
                if(nums[j]==0)
                {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
                }
            }
        }
    
    }
};