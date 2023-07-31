class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      
        int index=-1;
        for(int i= nums.size()-1;i>=1;i--)
        {
            if(nums[i]>nums[i-1])
            {
                index=i-1;
                break;
            }
        }
        if(index==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        sort(nums.begin()+index+1,nums.end());

        for(int i=index;i<nums.size();i++)
        {
            if(nums[index]<nums[i])
            {
                swap(nums[index],nums[i]);
                break;
            }
        }
        
    }
};
